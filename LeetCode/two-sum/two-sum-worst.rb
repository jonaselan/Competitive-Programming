# https://leetcode.com/problems/two-sum/

# brutal force </3
def two_sum(nums, target)
  array_size = nums.length

  for i in (0...array_size)
    for j in (0...array_size)
      if (i != j) && (nums[i] + nums[j]) == target
        return [i, j] # p [i, j]
      end
    end
  end
end

two_sum([3, 2, 4], 6)