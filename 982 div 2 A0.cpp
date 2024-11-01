#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

// Alhamdulillah

void Solve() {

    int n;cin >> n;

    int maxi1 = 0, maxi2 = 0;

    for (int i = 0; i < n; i++) {

        int length, width;

        cin >> length >> width;

        maxi1 = max(maxi1, length);

        maxi2 = max(maxi2, width);
    }
    // Perimeter of the rectangle: 2 * (max length + max width)

    cout << 2 * (maxi1 + maxi2) << endl;
}

int main() {

    improve;

    int t;cin >> t;

    while (t--) {

        Solve();
    }
    return 0;
}
