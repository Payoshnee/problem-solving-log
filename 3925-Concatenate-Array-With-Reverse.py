class Solution:
    def concatWithReverse(self, nums: list[int]) -> list[int]:
        
        a = nums
        b = list(reversed(nums))
        return a+b

