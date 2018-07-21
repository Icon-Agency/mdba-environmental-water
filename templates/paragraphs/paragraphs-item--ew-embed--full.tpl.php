<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>

<div class="ew-embed">
  <?php print render($content); ?>
</div>


<script>
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

          $(window).load(function () {
            $.get(Drupal.settings.pathToEWModule + '/data/waterThroughTime.json', function (data) {
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
            $.each(globalData, function (index, value) {
              var $dateItem = getDateTemplate()
              $(".date", $dateItem).attr("data-id", value.id)
              $(".date", $dateItem).addClass(value.type)
              $(".date", $dateItem).html(value.label)

              var markUp = $dateItem[0].outerHTML

              $(".dates").append(markUp)

              if (isDefault(value)) {
                setActive(value)
              }
            })

            $.each(globalData, function (index, value) {
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


            $.each($(".dates a"), function (index, link) {
              if ($(link).attr("data-id") == date.id) {

                $(link).addClass("active")
                showDateItems(date.items)
              }

            })
            $("#water-through-time").removeClass().addClass(date.type)
            $(".title .year").html(date.label)
            $(".title #type-title").html(date.type)
          }

          /**
           * [registerEvents description]
           * @return {[type]} [description]
           */
          var registerEvents = function () {
            $('.dates .date').on("click", function (e) {

              e.preventDefault()
              $('.fade').fadeOut("200", function () {
                var clickedDate = $(e.target).data('id')
                $(".dates a").removeClass("active")
                getItems(clickedDate)
                $('.fade').fadeIn()
              })
            })


            $('.dates-select').on("change", function (e) {
              $('.fade').fadeOut("200", function () {
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
            $.each(globalData, function (index, dates) {
              if (parseInt(date) === dates.id) {
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

            $.each(items, function (index, item) {
              var $itemTemplate = getTemplate()

              $itemTemplate.addClass("item" + item.item_no)
              if (item.item_no === 1 || item.item_no === 5 || item.item_no === 7) {
                $itemTemplate.addClass('arrow-bottom left')
              }
              if (item.item_no === 2 || item.item_no === 6) {
                $itemTemplate.addClass('arrow-bottom right')
              }
              if (item.item_no === 3 || item.item_no == 4) {
                $itemTemplate.addClass('arrow-top left')
              }

              $itemTemplate.attr("href", item.url)
              if (item.water_inner > 0) {
                $(".water .water-inner", $itemTemplate).css({
                  'width': item.water_inner + "px",
                  'height': item.water_inner + "px",
                  'margin-top': '-' + item.water_inner / 2 + 'px',
                  'margin-left': '-' + item.water_inner / 2 + 'px',
                  'display': 'block'
                })
              }
              if (item.water_outer > 0) {
                $(".water .water-outer", $itemTemplate).css({
                  'width': item.water_outer + "px",
                  'height': item.water_outer + "px",
                  'margin-top': '-' + item.water_outer / 2 + 'px',
                  'margin-left': '-' + item.water_outer / 2 + 'px',
                  'display': 'block'
                })
              }
              $(".header", $itemTemplate).html(item.name)
              $(".inner .amount", $itemTemplate).html(item.gl_amount + ' GL')
              $(".inner .icons .vegetation", $itemTemplate).addClass(item.vegetation)
              $(".inner .icons .waterbirds", $itemTemplate).addClass(item.waterbirds)
              $(".inner .icons .fish", $itemTemplate).addClass(item.fish)

              var markUp = $itemTemplate[0].outerHTML
              $("#item-list").append(markUp)
            })
          }

          /**
           * [getDateTemplate description]
           * @return {[type]} [description]
           */
          var getDateTemplate = function () {
            var $tpl = $('.date-tpl')

            return $tpl.clone().removeClass('date-tpl')
          }

          /**
           * [getDateTemplate description]
           * @return {[type]} [description]
           */
          var getDateSelectTemplate = function () {
            var $tpl = $('.date-select-tpl')

            return $tpl.clone().removeClass('date-select-tpl')
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
        // EOF Water through time custom script

        // Report card custom script
        $(document).ready(function () {
          if ($(".main-table").length) {
            $(".main-table").clone(true).appendTo('#table-scroll').addClass('clone')
          }
        })
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

      } // End of custom script
    };

  })(jQuery, Drupal);
</script>