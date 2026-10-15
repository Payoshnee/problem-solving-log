class Solution:
    def buildArray(self, nums: list[int]) -> list[int]:
        n = len(nums)
        ans = []
        for i in range(0,n,1):
            ans.append(nums[nums[i]])
        return ans