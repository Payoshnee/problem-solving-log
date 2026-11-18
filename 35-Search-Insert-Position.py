class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        n = len(nums)
        l = 0
        h = n - 1
        a = n
        while(l <= h):
            m = (l + h)//2
            if(target > nums[m]):
                l = m + 1
            else:
                a = m
                h = m - 1
        return a
