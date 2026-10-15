class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        a = sum(nums)
        ans = a % k
        return ans