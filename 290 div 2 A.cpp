#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    string s1(m, '#');

    string s2(m - 1, '.');

    s2 += '#';

    string s3; s3 +='#';

    s3 += string(m - 1, '.');

    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {

            cout << s1 << endl;

        } else {

            if ((i / 2) % 2 == 0) {

                cout << s2 << endl;

            } else {

                cout << s3 << endl;
            }
        }
    }
    return 0;
}
