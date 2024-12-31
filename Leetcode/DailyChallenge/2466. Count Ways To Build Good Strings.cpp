#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int const MOD = 1e9+7;
    int solve(int length, int low, int high, int zero, int one, vector<int>& dp) {        
        if(length > high) return 0;
        if(dp[length] != -1) return dp[length];
        int choice1,choice2,cur;
        cur = length >= low ? 1 : 0;
        choice1 = solve(length+zero, low, high, zero, one, dp);
        choice2 = solve(length+one, low, high, zero, one, dp);
        return dp[length] = (cur + ((choice1 + choice2)%MOD))%MOD;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(100005, -1);
        int ans = solve(0, low, high, zero, one, dp);
        return ans;
    }
};