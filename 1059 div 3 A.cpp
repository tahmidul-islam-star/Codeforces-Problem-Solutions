#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<set>
#include<map>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)


     void solve()
     {
      ll n;cin>>n;

      ll arra[n];

      for(ll i = 0 ;i<n;i++)
      {
          cin>>arra[i];
      }

     sort(arra,arra+n);

     cout<<arra[n-1]<<endl;
     }
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        solve();
    }
    return 0;
}





