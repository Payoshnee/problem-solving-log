class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        n = len(nums)
        leftsum = [0]
        for i in range(0,n-1,1):
            leftsum.append(leftsum[i]+nums[i])
        rightsum = [0]
        for i in range(0,n-1,1):
            rightsum.append(rightsum[i]+nums[n-(i+1)])
        rightsum = rightsum[::-1]
        ans = [0]*n
        for i in range(len(leftsum)):
            ans[i] = abs(leftsum[i] - rightsum[i])
        return ans

