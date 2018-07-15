<?php foreach ($items as $delta => $item): ?>
  <?php
    $item['#element']['attributes'] = array('class' => 'button');
  ?>
    <?php print render($item); ?>
<?php endforeach; ?>