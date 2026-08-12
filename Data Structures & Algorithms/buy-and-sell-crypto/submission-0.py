class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        i = 0 
        j = 1
        max1 = 0 

        while j < len(prices):
            if prices[i]>prices[j]:
                i = j
            else:
                profit = prices[j] - prices[i]
                max1 = max(profit,max1)

            j += 1
        return max1

        