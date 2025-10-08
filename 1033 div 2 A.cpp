#include <iostream>
#include <algorithm>
using namespace std;

bool isSquare(int a1, int b1, int a2, int b2, int a3, int b3) {
    // Ensure a >= b for all
    if (a1 < b1) swap(a1, b1);
    if (a2 < b2) swap(a2, b2);
    if (a3 < b3) swap(a3, b3);

    // Case 1: all widths equal, heights sum to width
    if (a1 == a2 && a2 == a3 && b1 + b2 + b3 == a1)
        return true;

    // Case 2: One rectangle fills the height, other two side-by-side fill rest
    // Check if first two stacked, third covers height
    if (b1 == b2 && a1 + a2 == a3 && b3 == b1)
        return true;

    // Check if rectangle 1 and (2+3) stacked form square
    if (a1 + a2 == a3 && b1 == b2 && b3 == b1)
        return true;

    // Case 3: rectangle1 + (rectangle2 stacked with rectangle3) side by side
    if (a1 + max(a2, a3) == max(a1, max(a2, a3)) &&
        b1 == b2 + b3 &&
        a2 == a3 &&
        b1 == max(b1, b2 + b3))
        return true;

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, b1, a2, b2, a3, b3;
        cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
        if (isSquare(a1, b1, a2, b2, a3, b3))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
