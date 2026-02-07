class Solution:
    def minimumDeletions(self, s: str) -> int:
        total_a = s.count("a")
        total_b = 0
        ans = total_a
        for c in s:
            if c == "b":
                total_b += 1
            else:
                total_a -= 1
            ans = min(ans, total_a + total_b)
        return ans
