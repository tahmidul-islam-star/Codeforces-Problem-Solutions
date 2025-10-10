#include <iostream>

using namespace std;
#define ll unsigned long long

void Solve()
{
      ll x, y, z; cin >> x >> y >> z;

        bool ok = false;

        for (int i = 0; i < 30; i++) {

            int a = (x >> i) & 1;

            int b = (y >> i) & 1;

            int c = (z >> i) & 1;

            if ((a + b + c == 2)) {

                ok = true;

                break;
            }
        }
        if(ok) cout<<"NO"<<endl;

        else cout<<"YES"<<endl;

}
int main() {

    int t; cin >> t;

    while (t--) {

        Solve();

    }
}
