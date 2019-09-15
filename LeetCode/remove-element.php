<?php
// https://leetcode.com/problems/remove-element/
function removeElement(&$nums, $val) {
    foreach($nums as $key => $num) {
        if ($num == $val) {
            unset($nums[$key]);
        }
    }

    return count($nums);
}

$nums = [0,1,2,2,3,0,4,2];
removeElement($nums, 2);