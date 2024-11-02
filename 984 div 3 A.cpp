#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
  int n;cin>>n;

  int arra[n];

  for(int i=0;i<n;i++)
  {
      cin>>arra[i];
  }
  bool ok = 1;

  for(int i=0;i<n-1;i++)
  {
      int temp = abs(arra[i]-arra[i+1]);

      if(temp !=5 && temp !=7)
      {
          ok =0;

          break;
      }
      }
  if(ok) cout<<"YES"<<endl;

  else cout<<"NO"<<endl;
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


