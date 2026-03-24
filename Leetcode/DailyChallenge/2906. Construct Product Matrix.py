class Solution:
    def constructProductMatrix(self, grid: List[List[int]]) -> List[List[int]]:
        MOD = 12345
        n, m = len(grid), len(grid[0])
        pref = [1] * (n * m + 1)
        suff = [1] * (n * m + 1)
        grid = [val for _ in grid for val in _]
        for i in range(n * m):
            pref[i + 1] = (pref[i] * grid[i]) % MOD
        for i in range((n * m) - 1, -1, -1):
            suff[i] = (suff[i + 1] * grid[i]) % MOD
        ans = []
        for i in range(n):
            cur = []
            for j in range(m):
                idx = i * m + j
                cur.append((pref[idx] * suff[idx + 1]) % MOD)
            ans.append(cur)
        return ans
