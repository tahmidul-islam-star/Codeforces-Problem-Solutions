#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
  ll n,x;cin>>n>>x;

  ll arra[n];

  for(ll i =0;i<n;i++)
  {
      cin>>arra[i];
  }
  sort(arra,arra+n,greater<int>());

  for(ll i=0;i<x;i++)
  {

  }


}
signed main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
      Solve();
    }
    return 0;
}

