#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void Solve() {
    int n;
    cin >> n;

    int arra[n][n];

    // Reading the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arra[i][j];
        }
    }

    int coun = 0; // Count of operations

    // Processing the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arra[i][j] < 0) { // If current height is negative
                int temp = -arra[i][j]; // Calculate how much to add
                coun += temp; // Increment operation count

                // Update diagonal elements
                for (int k = 0; k + i < n && k + j < n; k++) {
                    arra[i + k][j + k] += temp; // Increase the diagonal elements
                }
            }
        }
    }

    cout << coun << endl; // Output the total number of operations
}

signed main() {
    improve; // Fast I/O

    int _;
    cin >> _; // Number of test cases

    while (_--) {
        Solve(); // Solve each test case
    }
    return 0;
}
