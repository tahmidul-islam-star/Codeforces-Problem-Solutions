#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve() {

    int n, k;

    cin >> n >> k;

    unordered_map<int, ll> mymap;

    int x, y;

    for (int i = 0; i < k; i++) {

        cin >> x >> y;

        mymap[x] += y;
    }
    vector<ll> costs;

    for (auto &entry : mymap) {

        costs.push_back(entry.second);
    }

    sort(costs.rbegin(), costs.rend());

    ll sum = 0;

    int temp = costs.size();

    for (int i = 0; i < min(n,temp); i++) {

        sum += costs[i];
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
