#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    set<ll> s;
    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++){
        ll a;
        cin >> a;
        s.insert(a);
    }

    ll ans = s.size();
    cout << ans << endl;
}