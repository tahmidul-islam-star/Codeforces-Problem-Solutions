#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define ull unsigned long long

class Tahmid
{
public:

     ll Result()
    {
      ll n;cin>>n;

      n *=2;

      ll arra[n];

      for(ll i=0;i<n;i++)
      {
          cin>>arra[i];
      }
      sort(arra,arra+n);

      ll maxi = 0;

      for(ll i=0;i<n-1; i+=2)
      {
          ll mini = min(arra[i],arra[i+1]);

          maxi += mini;

          mini =0;
      }
      return maxi;
    }
};
signed main()
{
    improve;

    int _; cin>>_;

    while(_--)
    {
        Tahmid obj;

         cout<<obj.Result()<<endl;
    }
    return 0;
}



