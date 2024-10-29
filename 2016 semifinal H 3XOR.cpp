#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    long long result = 0;
    const int MAX_BITS = 21;  // As 2^20 > 10^6

    for (int bit = 0; bit < MAX_BITS; ++bit) {
        long long count_set = 0;
        for (int i = 0; i < n; ++i) {
            if (A[i] & (1 << bit)) {
                count_set++;
            }
        }
        long long count_unset = n - count_set;
        long long total_combinations = n * (n - 1) * (n - 2) / 6;
        long long invalid_combinations = count_set * (count_set - 1) * (count_set - 2) / 6 +
                                         count_unset * (count_unset - 1) * (count_unset - 2) / 6;
        long long valid_combinations = total_combinations - invalid_combinations;

        result += (1LL << bit) * valid_combinations;
    }

    cout << result << endl;
    return 0;
}
