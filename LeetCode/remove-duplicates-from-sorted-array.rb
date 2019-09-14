# @param {Integer[]} nums
# @return {Integer}
def remove_duplicates(nums)
  return 0 if (nums.count == 0)

  indexes_to_remove = []
  previously_index = nums.count - 1
  index = previously_index - 1

  while index >= 0
    if nums[previously_index] == nums[index]
      indexes_to_remove.push previously_index
    end

    previously_index = index
    index -= 1
  end


  indexes_to_remove.each do |i|
    nums.delete_at(i)
  end

  nums
end

remove_duplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4])
