#include <iostream>
#include <cstring>
#include<algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
     string s;cin >> s;

     int q;cin >> q;

     int sz = s.size();

     int coun =0;

     for(int i=0;i<sz-3;i++)
     {
       if(s.substr(i,4)== "1100") coun++;
     }
     while (q--) {

    int i, v;cin >> i >> v; i -=1;

    for(int j=i-3;j<=i;j++)
    {
     if(j<0 or j+3>=sz) continue;

     if(s.substr(j,4)=="1100") coun--; // Before change string
    }
    s[i] = '0' +v; // change string character int ith position

    for(int j=i-3;j<=i;j++)
    {
     if(j<0 or j+3>=sz) continue;

     if(s.substr(j,4)=="1100") coun++; // After
    }
    if (coun>0) cout << "YES" << endl;

    else cout << "NO" << endl;
 }
}
int main() {

    improve;

    int _;cin >> _;

    while (_--) {

        Solve();
    }
    return 0;
}
