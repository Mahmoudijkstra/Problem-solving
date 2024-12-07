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
int a[3][2]={{-1,-1},{0,0},{1,1}};
int b[3][2]={{-1,1},{0,0},{1,-1}};

void test_case(){

    string cur="MAS";
    int n=140,ans=0;
    vector<string> s(n);
    for(int i=0;i<n;i++) 
        cin >>s[i];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(s[i][j] == 'A') {
                bool ok=true;
                string s1,s2;
                for(int k=0;k<3;k++) {
                    if(isValid(i+a[k][0],j+a[k][1],n,n)) {
                        s1+=string(1,s[i+a[k][0]][j+a[k][1]]);
                    }
                    else {
                        ok=false;
                        break;
                    }
                    if(isValid(i+b[k][0],j+b[k][1],n,n)) {
                        s2+=string(1,s[i+b[k][0]][j+b[k][1]]);
                    }
                    else {
                        ok=false;
                        break;
                    }
                }
                if(!ok) continue;
                string s1r(s1.rbegin(),s1.rend());
                string s2r(s2.rbegin(),s2.rend());
                ans+=((s1==cur || s1r==cur) && (s2==cur || s2r==cur));
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