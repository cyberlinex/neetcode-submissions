class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        stack = []
        pair = [(p,s) for p,s in zip(position,speed)]
        pair = sorted(pair,reverse=True)
        for p,s in pair:
            time = (target-p)/s
            if stack ==[]:
                stack.append(time)
            elif stack[-1]<time:
                stack.append(time)
        return len(stack)
                