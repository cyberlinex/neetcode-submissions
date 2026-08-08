class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        result = []

        def backtrack(path,index,total):
            if total==target:
                result.append(path[:])
                return

            elif total>target or index==len(nums):
                return

            else:
                for i in range(index,len(nums)):
                    path.append(nums[i])
                    backtrack(path,i,total+nums[i])
                    path.pop()

        backtrack([],0,0)
        return result

        
        