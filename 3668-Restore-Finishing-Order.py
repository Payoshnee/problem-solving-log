class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        friend_set = set(friends)
        result = []
        for c in order:
            if(c in friend_set):
                result.append(c)
        return result