#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve() {

    int n, k;cin >> n >> k;

    int x, y; vector<int>vect(k+1,0);

    for (int i = 0; i < k; i++) {

        cin >> x >> y;

        vect[x] += y; // same brand so add
    }
    sort(vect.rbegin(), vect.rend());

    ll sum = 0;

    for (int i = 0; i < min(n,k); i++) {

        sum += vect[i];
    }
    cout << sum << endl;
}
int main() {

    improve;

    int t;cin >> t;

    while (t--) {

        solve();
    }
    return 0;
}

