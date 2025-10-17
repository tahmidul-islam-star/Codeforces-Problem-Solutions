#include <bits/stdc++.h>
using namespace std;

#define ll long long

void Solve() {

    ll a, b;cin >> a >> b;

    if(a == b) {cout << 0 << endl; return;}

    ll x = a ^ b;

    if(a < b) {

        if(x <= a) cout << 1 << endl << x << endl;

        else cout << -1 << endl;
    }
    else {

        if(x >= a) cout << 2 << endl << b<< " " << a << endl;

        else cout << 1 << endl << x << endl;
    }
}
int main() {

    int t; cin >> t;

    while(t--) Solve();
}
