class Solution:
    def rotate(self, nums: [int], k: int) -> None:
        k = k % len(nums)
        if len(nums) == 1 or k == 0:
            return
        start_index = jump_index = move_count = begining_indexes_replaced = 0
        num_pending_to_move = nums[0]
        while(True):
            start_index = jump_index
            jump_index = (start_index + k) % len(nums)
            aux = nums[jump_index]
            nums[jump_index] = num_pending_to_move
            num_pending_to_move = aux
            move_count += 1
            if jump_index == begining_indexes_replaced:
                begining_indexes_replaced += 1
                jump_index = begining_indexes_replaced
                num_pending_to_move = nums[begining_indexes_replaced]
            if move_count == len(nums):
                break
