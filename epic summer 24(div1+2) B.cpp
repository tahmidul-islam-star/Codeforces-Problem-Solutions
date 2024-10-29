#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<set>
#include<map>

using namespace std;

#define endl '\n'
#define ll unsigned long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

// Alhamdulilla

class Tahmid
{
 public:

     ll solve()
     {
      ll n;cin>>n;

      ll arra[n];

      for(ll i = 0 ;i<n ;i++)
      {
          cin>>arra[i];
      }
      ll coun = 0 ;

      int maxi = 0;

      for(ll i = 1; i<n ;i++)
      {
          ll diff = arra[i-1] - arra[i];

          coun += diff;

          maxi = max(maxi,diff);

          arra[i] = arra[i-1];

      }
      return maxi+coun;
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






