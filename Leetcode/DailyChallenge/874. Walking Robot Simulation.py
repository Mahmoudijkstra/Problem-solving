class Solution:
    def robotSim(self, commands: List[int], obstacles: List[List[int]]) -> int:
        moves = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        d = 0
        x, y = 0, 0
        ans = 0
        obstacles = {tuple(obstacle) for obstacle in obstacles}
        for c in commands:
            if c == -2:
                d = (d + 3) % 4
                continue
            if c == -1:
                d = (d + 5) % 4
                continue
            for k in range(c):
                x += moves[d][0]
                y += moves[d][1]
                if (x, y) in obstacles:
                    x -= moves[d][0]
                    y -= moves[d][1]
                    break
                ans = max(ans, x**2 + y**2)
        return ans
