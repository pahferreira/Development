$(function() {
    $(window).on("scroll", function() {
          if($(window).scrollTop() > 600) {
            $(".menu").css("background", "#000");
          } else {
            $(".menu").css("background", "rgba(0, 0, 0, 0.57)");
          }
          if($(window).scrollTop() > 1900) {
            $(".menu").css("border-bottom", "2px solid white");
          } else {
            $(".menu").css("border-bottom", "0");
          }
    });
});
jQuery(document).ready(function($) {
     $(".scroll").click(function(event){
        event.preventDefault();
        $('html,body').animate({scrollTop:$(this.hash).offset().top}, 800);
     });
});
