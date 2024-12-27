#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int cur=v[0];
        int ans=0,n=(int)v.size();
        for(int j=1;j<n;j++) {
            ans = max (ans, cur+v[j]-j);
            cur = max (cur, v[j]+j);
        }
        return ans;
    }
};