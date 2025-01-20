#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=(int)mat.size(),m=(int)mat[0].size();
        vector<pair<int,int>> v(n*m);
        vector<int> row(n),col(m);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int val=mat[i][j]-1;
                v[val].first=i;
                v[val].second=j;
            }
        }
        for(int i=0;i<n*m;i++) {
            int r=v[arr[i]-1].first;
            int c=v[arr[i]-1].second;
            row[r]++;
            col[c]++;
            if (row[r]==m || col[c]==n) return i;
        }
        return 0;
    }
};