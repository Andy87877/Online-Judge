#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll n, mx, ans;
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    mx = (n%(n/2+1));
    cout << mx << endl;
}