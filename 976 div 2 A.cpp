#include<iostream>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int Tahmid() {

    int n, k;

    cin >> n >> k;

    int coun = 0;

    if(k==1) return n;

    while (n > 0) {

        coun += n % k;

        n /= k;
    }
    return coun;
}
signed main() {

   improve;

    int _; cin >> _;

    while (_--) {

        cout<<Tahmid()<<endl;
    }

    return 0;
}
