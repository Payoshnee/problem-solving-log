class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        n = len(nums)
        currSum = 0
        maxSum = nums[0]
        for i in range (0,n,1):
            currSum += nums[i]
            maxSum = max(maxSum, currSum)
            if(currSum < 0):
                currSum = 0
        return maxSum