#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void Solve() {
    int n;
    cin >> n;
    vector<int> arra(n);

    for (int i = 0; i < n; i++) {
        cin >> arra[i];
    }

    int count = 0;

    // Brute force method to find pairs with the same sum
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Calculate the sum of the subarray from index i to j
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arra[k];
            }

            // Check if there exists a previous subarray with the same sum
            for (int l = 0; l < i; l++) {
                int prev_sum = 0;
                for (int m = l; m < i; m++) {
                    prev_sum += arra[m];
                }
                if (prev_sum == sum) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}

signed main() {
    improve;

    int _;
    cin >> _;

    while (_--) {
        Solve();
    }
    return 0;
}
