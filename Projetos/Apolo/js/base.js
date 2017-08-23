$(function() {
    $(window).on("scroll", function() {
          if($(window).scrollTop() > 450) {
            $(".menu").css("background", "#000");
          } else {
            $(".menu").css("background", "rgba(0, 0, 0, 0.57)");
          }
    });
});
jQuery(document).ready(function($) {
     $(".scroll").click(function(event){
        event.preventDefault();
        $('html,body').animate({scrollTop:$(this.hash).offset().top}, 800);
     });
});
