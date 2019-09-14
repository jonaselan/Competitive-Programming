#!/bin/ruby
# https://www.hackerrank.com/challenges/compare-the-triplets/problem

def compareTriplets(a, b)
  alice_points = 0
  bob_points = 0

  for i in 0..2 do
    comparison = (a[i] - b[i])
    next if comparison.zero?

    comparison.positive? ? (alice_points += 1) : (bob_points += 1)
   end

  [alice_points, bob_points]
end

a = [1, 5, 6]
b = [3, 2, 5]

compareTriplets a, b

