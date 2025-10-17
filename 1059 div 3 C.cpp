#include <bits/stdc++.h>
using namespace std;

#define ll long long

void Solve() {

    ll a,b; cin >> a >> b;

    if(a == b) { cout << 0 << endl; return; }

    ll x = a ^ b;

    if(x <= a) { cout << 1 << endl << x << endl; return; }

    ll x1 = 0;

    for(int i=30; i>=0; i--) {

        if((x>>i)&1) {

            if(!((a>>i)&1))  x1 |= (1LL<<i);
        }
    }
    ll x2 = x ^ x1;

    if(x1 <= a && x2 <= (a ^ x1)) {

        cout << 2 << endl << x1 << " " << x2 << endl;

    } else {

        cout << -1 << endl;
    }
}
int main() {

    int t; cin >> t;

    while(t--) Solve();
}
