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




void test_case(){


    string s;
    char c;
    ll ans=0;
    while(scanf("%c",&c) != EOF) s+=c;
    int n=(int)s.size();
    for(int i=0;i<n;i++) {
        string cur=s.substr(i,3);
        if(cur!="mul") continue;
        else {
            i+=3;
            if(s[i]!='(') {
                i--;
                continue;
            }
            i++;
            bool test=true;
            int len=0;
            string x;
            while(len <4 && test && i<n) {
                if(s[i]>='0' && s[i]<='9') {
                    x+=s[i];
                    i++;
                    len++;
                }
                else test=0;
            }
            if(s[i]!=',' || !len) {
                i--;
                continue;
            }
            int val1=0;
            for(int j=0;j<(int)x.size();j++) {
                val1+=(int)(x[j]-'0') * (int)(pow(10,len-j-1));
            }
            i++;
            len=0;
            test=true;
            string y;
            while(len <3 && test && i<n) {
                if(s[i]>='0' && s[i]<='9') {
                    y+=s[i];
                    i++;
                    len++;
                }
                else test=0;
            }
            if(s[i]!=')' || !len) {
                i--;
                continue;
            }
            int val2=0;
            for(int j=0;j<(int)y.size();j++) {
                val2+=((int)(y[j]-'0') * (int)pow(10, len-j-1));
            }
            ans+=(val1*val2);
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