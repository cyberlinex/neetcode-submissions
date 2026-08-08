class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        result = []
        candidates = sorted(candidates)
        def backtrack(path,index,total):

            if total == target:
                result.append(path[:])
                return

            if total>target or index == len(candidates):
                return 

            else:
                for i in range(index,len(candidates)):
                    if i>index and candidates[i] == candidates[i-1]:
                        continue

                    path.append(candidates[i])
                    backtrack(path,i+1,total+candidates[i])
                    path.pop()


        backtrack([],0,0)


        return result
        