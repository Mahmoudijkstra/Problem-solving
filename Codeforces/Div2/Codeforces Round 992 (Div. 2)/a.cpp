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
const int MOD=1e9+7;
const ll INF=1e18+9;


void test_case(){

    int n,k;
    cin >>n >>k;
    vi v(n);
    for(int i=0;i<n;i++) {
        cin >>v[i];
    }
    for(int i=0;i<n;i++) {
        bool test=true;
        for(int j=0;j<n;j++) {
            if(i==j) continue;
            if(abs(v[i]-v[j])%k == 0) {
                test=false;
                break;
            }
        }
        if(test || n==1) {
            cout <<"YES" <<endl <<i+1 <<endl;
            return ;
        }
    }
    cout <<"NO" <<endl;
    

}


int main(){

    optimise
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
    int t=1;
    cin >>t;
    while(t--){
        test_case();
    }
    return 0;

}
