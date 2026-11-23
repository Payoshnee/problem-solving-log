class Solution:
    def finalValueAfterOperations(self, operations: list[str]) -> int:
        x = 0
        for i in range(len(operations)):
            if("--X" in operations[i] or "X--" in operations[i]):
                x -= 1
            if("++X" in operations[i] or "X++" in operations[i]):
                x += 1
        return x
                    