# 88 MergeSortedArray

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        res = []
        j = 0
        for i in range(0, m):
            while j < n and nums2[j] < nums1[i]:
                res.append(nums2[j])
                j += 1
            res.append(nums1[i])
        for i in range(j, n):
            res.append(nums2[i])
        for i, x in enumerate(res):
            nums1[i] = x

