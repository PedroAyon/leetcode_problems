class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        last_number_index = 0
        for i in range(1, len(nums)):
            if nums[last_number_index] != nums[i]:
                last_number_index += 1
                nums[last_number_index] = nums[i]
            else:
                nums[i] = '_'
        return last_number_index + 1


