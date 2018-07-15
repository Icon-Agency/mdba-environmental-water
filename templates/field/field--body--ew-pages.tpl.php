<div class="section section--generous">
    <div class="container content-container">
        <div class="grid-row flex flex--aligned <?php print $classes; ?>"<?php print $attributes; ?>>
            <div class="col col--12 sm-col--12 md-col--10 md-col-push--1"<?php print $content_attributes; ?>>
              <?php foreach ($items as $delta => $item): ?>
                <?php print render($item); ?>
              <?php endforeach; ?>
            </div>
        </div>
    </div>
</div>
