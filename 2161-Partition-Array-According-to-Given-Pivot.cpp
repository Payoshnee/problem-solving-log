class Solution:
    def pivotArray(self, nums: list[int], pivot: int) -> list[int]:
        left = []
        mid = []
        right = []
        for i in nums:
            if i < pivot:
                left.append(i)
            elif i == pivot:
                mid.append(i)
            else:
                right.append(i)
        return left+mid+right