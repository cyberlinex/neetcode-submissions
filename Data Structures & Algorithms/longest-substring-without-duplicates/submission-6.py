class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 1:
            return 1
        d = {}
        i = 0 
        j = 0
        count = 0
        ans = 0
        for j in range(len(s)):
            while d.get(s[j]) is not None:
                if d[s[j]] == 1:
                    del d[s[i]]
                    count -= 1 
                    i += 1
                else:
                    d[s[i]] -= 1
                    count -= 1
                    i += 1
            
            d[s[j]] = 1
            j += 1
            count += 1
            ans = max(ans,count)

        return ans

