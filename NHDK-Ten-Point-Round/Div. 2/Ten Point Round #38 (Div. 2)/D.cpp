#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;

    vector<ll> arr[n];

    char c;
    ll a,b;
    for (ll i = 0; i < m; i++) {
        cin >> c >> a >> b;
        if (c == 'v' || c == 'r'){
            arr[a].push_back(b);
            arr[b].push_back(a);
        } else {
            
        }
    }
}