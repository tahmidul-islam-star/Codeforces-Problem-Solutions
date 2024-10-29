#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
  int n;cin>>n;

  int arra[n];

  for(int i = 0;i<n ;i++)
  {
      cin>>arra[i];
  }
  sort(arra,arra+n,greater<int>());

  int sum =0;

  sum += arra[0] - arra[n-1];

  sum *= (n-1);

  cout<<sum<<endl;
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

