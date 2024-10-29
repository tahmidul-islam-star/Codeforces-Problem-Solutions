#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
  int fam,br;// br = bus _row

  cin>>fam>>br;

  int arra[fam];

  int sum =0;

  for(int i =0;i<fam;i++)
  {
      cin>>arra[i];

      sum += arra[i];

  }
  int coun =0;

  for(int i =0 ;i<fam;i++)
  {
      if(arra[i]>= 2)
      {
          int temp = arra[i]/2;

          arra[i] %=2;

          br -= temp;

          coun += temp;
      }
  }
  int c1=0;

  for(int i =0;i<fam ;i++)
  {
      if(arra[i]==1)
      {
          c1++;
      }
  }
  if(br>=c1)
  {
      cout<<sum<<endl;
  }
  else{

    int temp2= br*2 - c1;

    cout<<(coun*2)+ temp2<<endl;
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
