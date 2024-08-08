class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        if n == 1:
            return 0
        maxp = 0
        minimum = maximum = prices[n - 1]
        i = n - 2
        while (i >= 0):
            num = prices[i]
            if num < minimum:
                minimum = num
                aux = maximum - minimum
                if aux > maxp:
                    maxp = aux
            elif num > maximum:
                maximum = num
                minimum = maximum
            i -= 1
        return maxp


