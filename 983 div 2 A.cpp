#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void Solve() {

    int n;cin >> n;

    int arra[2 * n];

    int coun0 = 0;

    int coun1 = 0;

    for (int i = 0; i < 2 * n; i++) {

        cin >> arra[i];

        if (arra[i] == 0)

            coun0++;

        else

            coun1++;
    }
    if(coun0==2*n || coun1==2*n) cout<<0<<" "<<0<<endl;

    else{

    int temp1 =coun0;

    int temp2 =coun1;

    temp1 %=2;

    temp2 %=2;

    int temp3= (min(coun0,coun1));

    int temp4 = min(temp1,temp2);

    cout <<temp4<< " " <<temp3 << endl;
    }
}
signed main() {

    improve;

    int t;cin >> t;

    while (t--) {

        Solve();
    }

    return 0;
}
