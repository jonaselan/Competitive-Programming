# https://leetcode.com/problems/two-sum/

# using hashtable
def two_sum(nums, target)
  array_size = nums.length

  nums_h = Hash.new

  for i in (0...array_size)
    # push value in hash
    nums_h[i] = nums[i]
    # get the complement
    complement = target - nums_h[i]
    # if the value exist, return already
    if nums_h.value?(complement) && nums_h.key(complement) != i
      return [i, nums_h.key(complement)]
    end
  end
end

# two_sum([5, 2, 4], 9)
two_sum([3, 2, 3], 6)