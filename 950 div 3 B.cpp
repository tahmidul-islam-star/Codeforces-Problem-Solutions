#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define may cout<<"MAYBE"<<endl

void Tahmid() {

    int n, f, k; cin >> n >> f >> k;

    vector<int> vect(n);

    for (int i = 0; i < n; i++) {

        cin >> vect[i];
    }

    int fav = vect[f - 1];

    sort(vect.begin(), vect.end(), greater<int>());

    int coun = 0;

    for (int i = 0; i < k; i++) {

        if (vect[i] == fav) {

            coun++;
        }
    }
    int total = count(vect.begin(), vect.end(), fav);

    if (coun == total) { yes;}

    else if (coun > 0) { may;}

    else { no;}
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;

    while (t--) {

        Tahmid();
    }

    return 0;
}
