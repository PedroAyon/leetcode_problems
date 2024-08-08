class Solution(object):
    def jump(self, nums):
        n = len(nums)
        if n == 1:
            return 0
        max_range = nums[0]
        jumps = 1
        i = 1
        while i < n:
            if max_range >= n - 1:
                break
            next_max_range = 0
            while i <= max_range:
                next_max_range = max(next_max_range, i + nums[i])
                i += 1
            max_range = next_max_range
            jumps += 1
        return jumps
