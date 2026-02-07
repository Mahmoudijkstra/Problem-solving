class Solution:
    def minRemoval(self, nums: List[int], k: int) -> int:
        nums.sort()
        n = len(nums)
        ans, r = n - 1, 0
        for i in range(n):
            while r < n and nums[i] * k >= nums[r]:
                r += 1
            ans = min(ans, n - (r - i))
        return ans
