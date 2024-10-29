#include <iostream>

using namespace std;

#define ll long long

bool Tahmid(ll a, ll b, ll c, ll d) {

    if (a + b + c == d) return true;
    if (a + b - c == d) return true;
    if (a + b * c == d) return true;
    if (a - b + c == d) return true;
    if (a - b - c == d) return true;
    if (a - b * c == d) return true;
    if (a * b + c == d) return true;
    if (a * b - c == d) return true;
    if (a * b * c == d) return true;

    if ((a + b) * c == d) return true;
    if ((a - b) * c == d) return true;
    if ((a * b) + c == d) return true;
    if ((a * b) - c == d) return true;
    if ((a * b) * c == d) return true;

    return false;
}

int main() {

    ll a, b, c, d; cin >> a >> b >> c >> d;

    if (Tahmid(a, b, c, d)) {

        cout << "YES" << endl;

    } else {

        cout << "NO" << endl;
    }

    return 0;
}
