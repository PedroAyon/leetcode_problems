class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        last_number_index = 0
        repeating_number_count = 1
        for i in range(1, len(nums)):
            if nums[last_number_index] != nums[i]:
                repeating_number_count = 0
            if nums[last_number_index] != nums[i] or repeating_number_count == 1:
                last_number_index += 1
                nums[last_number_index] = nums[i]
                repeating_number_count += 1
                if repeating_number_count > 1:
                    repeating_number_count = 0
            else:
                nums[i] = '_'
        return last_number_index + 1
