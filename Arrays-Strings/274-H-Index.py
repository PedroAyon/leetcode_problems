from typing import List
# H-Index

class Solution:
    def hIndex(self, citations: List[int]) -> int:
        h = 0
        greatest = 0
        for x in citations:
            greatest = max(greatest, x)
        bucket = [0] * (greatest + 1)
        for x in citations:
            bucket[x] += 1
        i = greatest
        count = 0
        while i >= 0:
            count += bucket[i]
            if count >= i:
                h = i
                break
            i -= 1
        return h
