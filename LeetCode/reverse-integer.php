<?php
  // https://leetcode.com/problems/reverse-integer/

  /**
   * @param Integer $x
   * @return Integer
   */
  function reverse($x) {
    $MAX_32_BITS = 2147483647;

    $r = $x < 0 ? '-' : '';
    $modular_x = abs($x);
    for ($i = strlen($modular_x); $i >= 0; $i--) {
      $r .= substr($modular_x, $i, 1);
    }

    return (abs($r) >= $MAX_32_BITS) ? 0 : (int)$r;
  }

  reverse(1230);