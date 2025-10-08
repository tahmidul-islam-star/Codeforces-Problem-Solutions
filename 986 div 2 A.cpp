#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        int x = 0, y = 0;  // Alice's starting position (0,0)
        set<pair<int, int>> visited;  // To track the visited positions

        // Loop through Alice's movement indefinitely
        while (true) {
            // Track each step in the movement sequence
            for (int i = 0; i < n; i++) {
                // If Alice reaches the Red Queen, output "YES" and break
                if (x == a && y == b) {
                    cout << "YES" << endl;
                    goto next_test_case;
                }

                // Move according to the current direction in the string
                if (s[i] == 'N') y++;
                else if (s[i] == 'E') x++;
                else if (s[i] == 'S') y--;
                else if (s[i] == 'W') x--;

                // Check if Alice revisits a position without reaching the target
                if (visited.count({x, y}) > 0) {
                    cout << "NO" << endl;
                    goto next_test_case;
                }

                // Mark the current position as visited
                visited.insert({x, y});
            }
        }

    next_test_case:
        continue;  // Go to the next test case
    }

    return 0;
}
