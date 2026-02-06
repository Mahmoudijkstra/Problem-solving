#include <bits/stdc++.h>
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define pb push_back
#define ll long long
#define fi first
#define se second
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define optimise                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int naxi = 1e9 + 5;
const ll naxl = 1e18 + 5;
const int nax = 1e5 + 5;
const int MOD = 1e9 + 7;
const ll INF = 1e18 + 9;

void test_case() {
    int n, q;
    cin >> n >> q;
    vi a(n);
    vector<ll> pref(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = max(a[i], x);
    }
    for (int i = n - 2; i > -1; i--) {
        a[i] = max(a[i], a[i + 1]);
    }
    for (int i = 1; i < n + 1; i++) {
        pref[i] = a[i - 1] + pref[i - 1];
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << ' ';
    }
    cout << endl;
}

int main() {
    optimise;
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        test_case();
    }
    return 0;
}
