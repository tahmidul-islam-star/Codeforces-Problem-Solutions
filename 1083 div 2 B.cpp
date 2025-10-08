#include <iostream>
#include<cstring>
#include<algorithm>

using namespace std;

void Solve()
{
      int n, k; cin >> n >> k;

      string s;cin >> s;

       if(n==k) {

        for(int i=0;i<n;i++)
        {
            cout<<"-";
        }
        cout<<endl;return;
       }
        int coun0 = 0, coun1 = 0, coun2 = 0;

        for (char c : s) {

        if (c == '0') coun0++;

        else if (c == '1') coun1++;

        else coun2++;
        }
        string res(n, '?');

        for (int i = 0; i < coun0; i++) {res[i] = '-';}

        for (int i = 0; i < coun1; i++) {res[n - 1 - i] = '-';}

        for (int i = 0; i < n; i++){

        if (i >= (coun0+coun2)  && i < n - (coun1+coun2))  res[i] = '+';
        }
        cout << res << endl;
    }

int main() {

    int t; cin >> t;

    while (t--) {

    Solve();

    }
}

