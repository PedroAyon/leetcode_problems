class Solution(object):
    def canJump(self, nums):
        n = len(nums)
        if n == 1:
            return True
        accesibility = [True]
        accesibility_range = nums[0]
        for i in range (1, n):
            if accesibility_range > 0:
                if i == n - 1:
                    return True
                accesibility.append(True)
                accesibility_range -= 1
                accesibility_range = max(accesibility_range, nums[i])
            else:
                break
        return False
