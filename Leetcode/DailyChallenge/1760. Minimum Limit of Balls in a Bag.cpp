class Solution {
public:
    int minimumSize(vector<int>& v, int mx) {
        sort(v.rbegin(),v.rend());
        int n=(int)v.size();
        int l=1,r=v[0];   
        int ans=-1; 
        while(l<=r) {
            int m=l+(r-l)/2;
            int cur=mx;
            for(int i=0;i<n;i++) {
                if(v[i] <= m || cur < 0) break;
                cur -= (v[i]/m);
                if(v[i]%m == 0) cur++;
            }    
            if(cur >= 0) {
                ans=m;
                r=m-1;
            }
            else l=m+1;
        }
        return ans;
    }
};