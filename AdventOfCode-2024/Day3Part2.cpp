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



int getNumber(int &i, string &s) {
    int res=0;
    while(res <1000 && isdigit(s[i])) {
        res = res*10 + (s[i]-'0');
        i++;
    }
    return res<1000 ? res : -1;
}


void test_case(){


    string s;
    char c;
    ll ans=0;
    while(scanf("%c",&c) != EOF) s+=c;
    int n=(int)s.size();
    bool can=true;
    for(int i=0;i<n;i++) {
        if(s.substr(i,3)=="mul" && can) {
            i+=3;
            if(s[i]!='(') {
                i--;
                continue;
            }
            i++;
            int val1=getNumber(i,s);
            if(s[i]!=',' || val1==-1) {
                i--;
                continue;
            }
            i++;
            int val2=getNumber(i,s);
            if(s[i]!=')' || val2==-1) {
                i--;
                continue;
            }
            ans+=(val1*val2);
        }
        else if(s.substr(i,4) == "do()") can=true;
        else if(s.substr(i,7) == "don't()") can=false;
        else continue;
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