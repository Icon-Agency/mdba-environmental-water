/**
 * @file
 * A JavaScript file.
 */

(function ($, Drupal) {

  'use strict';

  // EW Javascript.
  Drupal.behaviors.envEformWildlifeTradePermit = {
    attach: function (context, settings) {

      // Water through time custom script
      if ($('#water-through-time').length) {

          var globalData
          var pageType
          var pageDate

          $(window).load(function(){
              $.get(Drupal.settings.pathToEWModule + '/data/waterThroughTime.json', function(data){
                  globalData = data.dates
                  init();
              })
          })

          /**
           * [init description]
           * @return {[type]} [description]
           */
          var init = function () {
              $('.fade').fadeIn()
              $.each(globalData, function(index, value) {
                  var $dateItem = getDateTemplate()
                  $(".date", $dateItem).attr("data-id", value.id)
                  $(".date", $dateItem).addClass(value.type)
                  $(".date", $dateItem).html(value.label)

                  var markUp = $dateItem[0].outerHTML
                  $(".dates").append(markUp)

                  if(isDefault(value)) {
                      setActive(value)
                  }
              })

              $.each(globalData, function(index, value) {
                  var $dateItemSelect = getDateSelectTemplate()
                  $dateItemSelect.attr("value", value.id)
                  $dateItemSelect.text(value.label)

                  var markUp = $dateItemSelect[0].outerHTML
                  $(".dates-select").append(markUp)
              })

              registerEvents()
          }

          /**
           * [isDefault description]
           * @param  {[type]}  item [description]
           * @return {Boolean}      [description]
           */
          var isDefault = function (item) {
              return item.is_default
          }

          /**
           * [setActive description]
           * @param {[type]} value [description]
           */
          var setActive = function (date) {
              var pageType = date.type
              $(".dates a").removeClass("active")


              $.each($(".dates a"), function(index, link) {
                  if($(link).attr("data-id") == date.id) {

                      $(link).addClass("active")
                      showDateItems(date.items)
                  }

              })
              $("#water-through-time").removeClass().addClass(date.type)
              $(".title .year").html(date.label)
              $(".title #type-title").html(date.type)
              if (date.type == 'flood') {
                  $(".title #type-title").html('very wet')
              } else {
                  $(".title #type-title").html(date.type)
              }

          }

          /**
           * [registerEvents description]
           * @return {[type]} [description]
           */
          var registerEvents = function () {
              $('.dates .date').on("click", function(e){

                  e.preventDefault()
                  $('.fade').fadeOut("200", function(){
                      var clickedDate = $(e.target).data('id')
                      $(".dates a").removeClass("active")
                      getItems(clickedDate)
                      $('.fade').fadeIn()
                  })
              })


              $('.dates-select').on("change", function(e){
                  $('.fade').fadeOut("200", function(){
                      getItems(e.target.value)
                      $('.fade').fadeIn()
                  })
              })
          }

          /**
           * [getServices description]
           * @param  {[type]} findable [description]
           * @return {[type]}          [description]
           */
          var getItems = function (date) {
              $.each(globalData, function(index, dates) {
                  if(parseInt(date) === dates.id) {
                      setActive(dates)
                  }
              });
          }

          /**
           * [showDateItems description]
           * @param  {[type]} items [description]
           * @return {[type]}       [description]
           */
          var showDateItems = function (items) {
              $("#item-list").children().remove()

              $.each(items, function(index, item) {
                  var $itemTemplate = getTemplate()
                  var temp_wot_px;

                  $itemTemplate.addClass("item" + item.item_no)
                  if(item.item_no === 1 || item.item_no === 5 || item.item_no === 7){
                      $itemTemplate.addClass('arrow-bottom left')
                  }
                  if(item.item_no === 2 || item.item_no === 6){
                      $itemTemplate.addClass('arrow-bottom right')
                  }
                  if(item.item_no === 3 || item.item_no == 4){
                      $itemTemplate.addClass('arrow-top left')
                  }

                  $itemTemplate.attr("href", item.url)
                  if(item.water_inner > 0 ){
                      temp_wot_px = mdba_get_wot_chart_px(item.water_inner);
                      $(".water .water-inner", $itemTemplate).css({
                          'width' : temp_wot_px + "px",
                          'height' : temp_wot_px + "px",
                          'margin-top' : '-' + temp_wot_px / 2 + 'px',
                          'margin-left' : '-' + temp_wot_px / 2 + 'px',
                          'display' : 'block'
                      })
                  }
                  if(item.water_outer > 0 ){
                      temp_wot_px = mdba_get_wot_chart_px(item.water_outer);
                      $(".water .water-outer", $itemTemplate).css({
                          'width' :  temp_wot_px + "px",
                          'height' : temp_wot_px + "px",
                          'margin-top' : '-' + temp_wot_px / 2 + 'px',
                          'margin-left' : '-' + temp_wot_px / 2 + 'px',
                          'display' : 'block'
                      })
                  }
                  if(item.works == true){
                      $(".inner .icons .works", $itemTemplate).css('display', 'block')
                  }
                  $(".header", $itemTemplate).html(item.name)
                  $(".inner .amount", $itemTemplate).html(item.gl_amount + ' GL')
                  $(".inner .icons .vegetation", $itemTemplate).addClass(item.vegetation)
                  $(".inner .icons .waterbirds", $itemTemplate).addClass(item.waterbirds)
                  $(".inner .icons .fish", $itemTemplate).addClass(item.fish)

                  console.log('here?')

                  iconsSubIcon(item.vegetation, "vegetation", $itemTemplate)
                  iconsSubIcon(item.waterbirds, "waterbirds", $itemTemplate)
                  iconsSubIcon(item.fish, "fish", $itemTemplate)

                  var markUp = $itemTemplate[0].outerHTML
                  $("#item-list").append(markUp)
              })
          }

          /**
           * [getDateTemplate description]
           * @return {[type]} [description]
           */
          var getDateTemplate = function() {
              var $tpl = $('.date-tpl')

              return $tpl.clone().removeClass('date-tpl')
          }

          /**
           * [getDateTemplate description]
           * @return {[type]} [description]
           */
          var getDateSelectTemplate = function() {
              var $tpl = $('.date-select-tpl')

              return $tpl.clone().removeClass('date-select-tpl')
          }

          /**
           * [getTemplate description]
           * @return {[type]} [description]
           */
          var getTemplate = function() {
              var $tpl = $('.item-tpl')

              return $tpl.clone().removeClass('item-tpl')
          }

          /**
           * [iconsSubIcon description]
           * @param  {[type]} type      [description]
           * @param  {[type]} className [description]
           * @param  {[type]} template  [description]
           * @return {[type]}           [description]
           */
          var iconsSubIcon = function (type, className, template) {
              if(type == "improvement"){
                  console.log("1")
                  $(".inner .icons ." + className + "-wrap .icon-improvement", template).css("display", "block")
              }
              else if(type == "no-change"){
                  console.log("2")
                  $(".inner .icons ." + className + "-wrap .icon-no-change", template).css("display", "block")
              }
              else if(type == "decline"){
                  console.log("3")
                  $(".inner .icons ." + className + "-wrap .icon-decline", template).css("display", "block")
              }
          }
      }
      // EOF Water through time custom script

      // Report card custom script
      $(document).ready(function () {
        if ($(".main-table").length) {
          $(".main-table").clone(true).appendTo('#table-scroll').addClass('clone')
        }

        if ($('.field-name-field-ew-pb-additional-images').length) {
          $(".field-name-field-ew-pb-additional-images .field-items").slick({
            mobileFirst: true,
            dots: true,
            infinite: true,
            centerMode: true,
            slidesToShow: 1,
            slidesToScroll: 1,
            centerPadding: '25%',
            arrows: true,
            responsive: [{
              breakpoint: 1024,
              settings: {
                centerPadding: '25%',
              }
            },
              {
                breakpoint: 600,
                settings: {
                  centerPadding: '5%',
                }
              }, {
                breakpoint: 300,
                settings: {
                  centerPadding: '0%',
                }
              }]
          });
        }

      });
      // EOF Report card custom script

      // Water summary custom script
      if ($(".water-summary").length) {
        // Desktop tab functionality
        if ($('ul.ws-tabs').css('display') == 'block') {

          $('ul.ws-tabs').each(function () {

            var $active, $content, $links = $(this).find('a')

            $active = $($links.filter('[href="' + location.hash + '"]')[0] || $links[0])
            $active.addClass('active')

            $content = $($active[0].hash)

            $links.not($active).each(function () {
              $(this.hash).fadeOut()
            })

            $(this).on('click', 'a', function (e) {
              e.preventDefault()

              $active.removeClass('active')

              $content.fadeOut(function () {
                $active.addClass('active')
                $content.fadeIn()
              })

              $active = $(this)
              $content = $(this.hash)
            })
          })

        }
        // Mobile tab functionality
        if ($('ul.ws-tabs').css('display') == 'none') {
          $('.ws-tab-content .nav-mobile-tab').on('click', function (e) {
            e.preventDefault()

            var inner = $(this).next()

            $(inner).stop().slideToggle()
          })
        }
      }
      // EOF Water summary custom script

      if ($(".whos-who").length) {
        var globalData

        $(document).ready(function () {

          var svgChevronIcon = '<svg aria-hidden="true" data-prefix="far" data-icon="chevron-down" class="chevron-down" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512"><path d="M441.9 167.3l-19.8-19.8c-4.7-4.7-12.3-4.7-17 0L224 328.2 42.9 147.5c-4.7-4.7-12.3-4.7-17 0L6.1 167.3c-4.7 4.7-4.7 12.3 0 17l209.4 209.4c4.7 4.7 12.3 4.7 17 0l209.4-209.4c4.7-4.7 4.7-12.3 0-17z"></path></svg>'
          var svgCloseIcon = '<svg aria-hidden="true" data-prefix="far" data-icon="times" class="times" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 320 512"><path d="M207.6 256l107.72-107.72c6.23-6.23 6.23-16.34 0-22.58l-25.03-25.03c-6.23-6.23-16.34-6.23-22.58 0L160 208.4 52.28 100.68c-6.23-6.23-16.34-6.23-22.58 0L4.68 125.7c-6.23 6.23-6.23 16.34 0 22.58L112.4 256 4.68 363.72c-6.23 6.23-6.23 16.34 0 22.58l25.03 25.03c6.23 6.23 16.34 6.23 22.58 0L160 303.6l107.72 107.72c6.23 6.23 16.34 6.23 22.58 0l25.03-25.03c6.23-6.23 6.23-16.34 0-22.58L207.6 256z"></path></svg>'

          $('.whos-who-river').on('click', '.item .ww-footer', function () {
            if ($(this).prev().hasClass('open')) {
              $(this).prev().removeClass('open')
              $(this).prev().stop().slideUp()
              $(this).removeClass('close')
              $(this).html(svgChevronIcon + ' Main Activities')
            } else {
              $(this).prev().addClass('open')
              $(this).prev().stop().slideDown()
              $(this).addClass('close')
              $(this).html(svgCloseIcon + ' Close')
            }
          })
        });


        $(window).load(function () {
          $.get(Drupal.settings.pathToEWModule + '/data/whosWho.json', function (data) {
            globalData = data.who_who.items
            init();
          })
        });

        var init = function () {

          $.each(globalData, function (index, item) {
            var $whosWhoItem = getTemplate()

            $whosWhoItem.addClass("item" + item.item_no)
            $(".info h4", $whosWhoItem).html(item.label)
            $(".info p", $whosWhoItem).html(item.summary)
            $(".info img", $whosWhoItem).attr("src", Drupal.settings.pathToEWModule + "/img/whos-who/" + item.img)
            $(".inner", $whosWhoItem).html(item.text)

            var markUp = $whosWhoItem[0].outerHTML
            $("#item-list").append(markUp)
          });
        }

        /**
         * [getTemplate description]
         * @return {[type]} [description]
         */
        var getTemplate = function () {
          var $tpl = $('.item-tpl')

          return $tpl.clone().removeClass('item-tpl')
        }

      }

    } // End of custom script
  };

  function mdba_get_wot_chart_px(input){
      return Math.ceil(12 * Math.log(input) + 26);
  }

})(jQuery, Drupal);
