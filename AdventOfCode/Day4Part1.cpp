#include <bits/stdc++.h>
#include <cstdio>
#include <ostream>
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

bool isValid(int i, int j, int n, int m) {
    return (i>=0 && i<n && j>=0 && j<m);
}

void test_case(){

    string cur="XMAS";
    int n=140,ans=0;
    vector<string> s(n);
    for(int i=0;i<n;i++) 
        cin >>s[i];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(s[i][j] == 'X') {
                for(int r=-1;r<=1;r++) {
                    for(int c=-1;c<=1;c++) {
                        bool ok=true;
                        if(r == 0 && c == 0) continue;
                        for(int k=0;k<4;k++) {
                            int x = i + r*k;
                            int y = j + c*k;
                            if(!isValid(x,y,n,n) || s[x][y]!=cur[k]) {
                                ok=false;
                                break;
                            }
                        }
                        if(ok) ans++;    
                    }
                }
            }
        }
    }
    cout <<ans <<endl;
    
}

int main(){

    optimise
    #ifndef ONLINE_JUDGE
        //freopen("input.in", "r", stdin);
        //freopen("output.out", "w", stdout);
    #endif
    int t=1;
    //cin >>t;
    while(t--){
        test_case();
    }
    return 0;

}