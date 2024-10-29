#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

#define loop for(int i = 0; i < n; i++)


void Tahmid() {

    int n; cin >> n;

    vector<string> arra(n);

    unordered_set<string> p;

    loop {

        cin >> arra[i];

        p.insert(arra[i]);
    }

    loop {

        int ok= -1;

        for (int j = 1; j < arra[i].size(); j++) {

            string left = arra[i].substr(0, j);

            string right = arra[i].substr(j);

            if (p.count(left) and p.count(right)) {

                ok = 1;

                break;
            }
        }

        if (ok==1) {

            cout << "1";

        } else {

            cout << "0";
        }
    }
    cout << endl;
}

int main() {

    int t;

    cin >> t;

    while (t--) {

        Tahmid();
    }

    return 0;
}
