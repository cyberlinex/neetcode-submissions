class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = 0 

        ans = 0 
        temp = set()

        for r in range(len(s)):
            while s[r] in temp:
                temp.remove(s[l])
                l += 1


            temp.add(s[r])
            ans = max(ans,r-l+1)


        return ans



        