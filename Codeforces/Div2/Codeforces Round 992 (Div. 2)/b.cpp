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

    int n;
    cin >>n;
    if(n==1) cout <<1 <<endl;
    else if(n<=4) cout <<2 <<endl;
    else {
        int cur=2,val=4;
        for(int i=0;;i++) {
            val++;
            val*=2;
            cur++;
            if(n<=val) {
                cout <<cur <<endl;
                break;  
            }
        }
    }

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
