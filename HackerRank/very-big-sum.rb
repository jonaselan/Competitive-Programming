#!/bin/ruby
# https://www.hackerrank.com/challenges/compare-the-triplets/problem

def aVeryBigSum(ar)
  sum = 0
  ar.each do |value|
    sum += value
  end

  sum
end

ar = [1, 2 ,3]

p aVeryBigSum ar

