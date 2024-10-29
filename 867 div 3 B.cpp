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

// Alhamdulilla

class Tahmid
{
 public:

     ll solve()
     {
      ll n;cin>>n;

      ll arra[n];

      for(ll i = 0 ;i<n;i++)
      {
          cin>>arra[i];
      }
      ll maxi = INT_MIN;

      sort(arra,arra+n);

     ll maxi1= (ll) arra[0]*arra[1]; // if negative 2 negative value found product is positive so can bigger than last 2 value

     ll maxi2 = (ll) arra[n-2] *arra[n-1];

      return max(maxi1,maxi2);
     }
};
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Tahmid obj;

       cout<< obj.solve()<<endl;
    }
    return 0;
}




