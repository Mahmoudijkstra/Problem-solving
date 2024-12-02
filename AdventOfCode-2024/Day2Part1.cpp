#include <bits/stdc++.h>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define pb push_back
#define ll long long
#define fi first
#define se second
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define optimise ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int naxi=1e9+5;
const ll naxl=1e18+5;
const int nax=1e5+5;
const int MOD=998244353;
const ll INF=1e18+9;


void test_case(){

    int N=1000;
    int ans=0;
    for(int i=0;i<N;i++) {
        vector<int> v;
        while(true) {
            int x;
            scanf("%d",&x);
            v.pb(x);
            char c;
            scanf("%c",&c);
            if(c=='\n') break;
        }
        bool increasing=0,decreasing=0,test=1;
        int n=(int)v.size();
        for(int j=0;j<n-1 && test;j++) {
            int cur=(v[j]-v[j+1]);
            if(cur<0) increasing=1;
            if(cur>0) decreasing=1;
            int diff=abs(cur);
            if((diff<1 || diff>3) || (increasing && decreasing)) test=0;
        }
        if(test) ans++;
    }
    cout <<ans <<endl;

}

int main(){

    optimise
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
    int t=1;
    //cin >>t;
    while(t--){
        test_case();
    }
    return 0;

}