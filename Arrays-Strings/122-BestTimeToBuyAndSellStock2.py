class Solution(object):
    def maxProfit(self, prices):
        n = len(prices)
        if n == 1:
            return
        minimum = maximum = prices[0]
        total_profit = 0
        aux_profit = 0
        for i in range(1, n):
            if prices[i] > maximum:
                maximum = prices[i]
                aux_profit = maximum - minimum
            if prices[i] < minimum or prices[i] < maximum:
                total_profit += aux_profit
                aux_profit = 0
                minimum = prices[i]
                maximum = minimum
        total_profit += aux_profit
        return total_profit



