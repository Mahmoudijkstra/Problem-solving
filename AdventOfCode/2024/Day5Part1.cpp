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

    int n=1176,ans=0;
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++) {
        string s;
        cin >>s;
        int x=stoi(s.substr(0,2));
        int y=stoi(s.substr(3,2));
        mp[x].pb(y);
    }
    int lines=196;
    for(int i=0;i<lines;i++) {
        map<int,bool> vis;
        string s;
        cin >>s;
        int len=(int)s.size();
        bool ok=true;
        for(int j=0;j<len && ok;j+=3) {
            int x=stoi(s.substr(j,2));
            for(auto &y : mp[x]) {
                if(vis[y]==true) {
                    ok=false;
                    break;
                } 
            }
            vis[x]=true;
        }
        if(ok) {
            int indx=len/2;
            if(len%2 == 0 ) indx--;
            int val=stoi(s.substr(indx,2));
            ans+=val;
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