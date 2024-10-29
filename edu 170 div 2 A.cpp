#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
  string s1,s2;

  cin>>s1>>s2;

  int small = min(s1.size(),s2.size());

  int res =s1.size() + s2.size();

  int coun = 0;

  for(int i = 0; i<small ;i++)
  {
      if(s1[i] == s2[i]) coun++;

      else{

        break;
      }
  }
  if(coun>0) cout<<res-coun+1<<endl;

  else cout<<res-coun<<endl;
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
