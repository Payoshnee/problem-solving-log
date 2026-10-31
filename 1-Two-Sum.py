class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        numMap = {}
        n = len(nums)
        for i in range (n):
            ans = target - nums[i]

            if(ans in numMap):
                return [numMap[ans],i]
            
            numMap[nums[i]] = i