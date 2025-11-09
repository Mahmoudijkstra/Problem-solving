class Solution:
    def countOperations(self, a: int, b: int) -> int:
        cnt = 0
        while a != 0 and b != 0:
            if a >= b:
                a -= b
            else:
                b -= a
            cnt += 1
        return cnt
