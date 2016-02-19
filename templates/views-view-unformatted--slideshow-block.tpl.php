<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div id="myCarousel" class="carousel slide">
  <ol class="carousel-indicators">
    <?php foreach ($rows as $id => $row): ?>
      <li data-target="#myCarousel" data-slide-to="<?php print $id; ?>" <?php print ($id == 0 ? 'class="active"' : ''); ?>></li>
    <?php endforeach; ?>
  </ol>
  <!-- Carousel items -->
  <div class="carousel-inner">
    <?php foreach ($rows as $id => $row): ?>
      <div class="item<?php print ($id == 0 ? ' active' : ''); ?>">
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
 </div>
  <!-- Carousel nav -->
  <a class="carousel-control left" href="#myCarousel" data-slide="prev">&lsaquo;</a>
  <a class="carousel-control right" href="#myCarousel" data-slide="next">&rsaquo;</a>
</div>
