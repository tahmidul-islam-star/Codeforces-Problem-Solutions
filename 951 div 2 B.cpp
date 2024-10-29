#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the maximum k for Alice to guarantee her win
int find_maximum_k(int n, vector<int>& arr) {
    int min_diff = INT_MAX;
    for (int i = 1; i < n; ++i) {
        min_diff = min(min_diff, arr[i] - arr[i - 1]);
    }
    return max(0, min_diff - 1);
}

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n; // Number of elements in the array
        cin >> n;
        vector<int> arr(n); // Array elements
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int result = find_maximum_k(n, arr);
        cout << result << endl;
    }
    return 0;
}
