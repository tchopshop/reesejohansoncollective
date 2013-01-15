(function($) {

Drupal.behaviors.popular_tags = {
  attach: function(context, settings) {
    $('.popular-tags .tag-terms .term', context).click(function(event) {
      $this = $(this);
      var inp = $this.parents('.form-item').find('input:text.form-autocomplete');
      var val = inp.val();
      var term = $this.text();
      if(val.indexOf(term) == 0) {
        return false;
      }
      if(val.indexOf(', ' + term) >= 0) {
        return false;
      }
      if(val) {
        inp.val(val + ', ' + term);
      } else {
        inp.val(term);
      }
      return false;
    });
    if(Drupal.settings.popular_tags) {
      for(field_name in Drupal.settings.popular_tags) {
        var _field_name = field_name.replace('_', '-');
        var field_container = $('.form-item-' + _field_name + '-und', context);
        var tag_container = field_container.find('.popular-tags');
        var show = tag_container.find('a.show-all-terms');
        var hide = tag_container.find('a.show-popular-terms');
        show.click(function() {
          $(this).hide();
          hide.show();
          tag_container.find('.term').not('.popular').show();
          return false;
        });
        hide.click(function() {
          $(this).hide();
          show.show();
          tag_container.find('.term').not('.popular').hide();
          return false;
        });
        hide.click();
      }
    }
  }
}

})(jQuery)
