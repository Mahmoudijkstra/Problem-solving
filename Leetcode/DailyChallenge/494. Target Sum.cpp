#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int i, vector<int>& v, int n, int cur, int target, vector<vector<int>>& dp) {
        if(dp[i][2000+cur] != -4000) return dp[i][2000+cur];
        if(i == n) return cur == target ? 1 : 0;
        int plus = solve(i+1, v, n, cur+v[i], target, dp);
        int minus = solve(i+1, v, n, cur-v[i], target, dp);
        return dp[i][2000+cur] = minus + plus; 
    }
    int findTargetSumWays(vector<int>& v, int target) {
        int n = (int)v.size();
        vector<vector<int>> dp (n+5, vector<int> (5000, -4000));
        int ans = solve(0, v, n, 0, target, dp);
        return ans;
    }
};