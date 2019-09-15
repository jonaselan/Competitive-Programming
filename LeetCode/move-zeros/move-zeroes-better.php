<?php

/**
 * https://leetcode.com/problems/move-zeroes
 * @param Integer[] $nums
 * @return NULL
 */
function moveZeroes(&$nums) {
  $nums_count = count($nums);

  for ($i=0; $i < $nums_count; $i++) {
    if ($nums[$i] == 0) {
      unset($nums[$i]);
      array_push($nums, 0);
    }
  }

  return $nums;
}

$array = [0,1,0,3,12];
moveZeroes($array);