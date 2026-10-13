class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0 
        ans = 0
        n = len(prices)

        for r in range(n):
            temp = prices[r] - prices[l]

            if temp < 0:
                l = r

            else:
                ans = max(temp,ans)


        return ans 





        