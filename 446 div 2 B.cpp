 #include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<queue>
#include<cstdint>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define ll unsigned long long
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

void Tahmid()
{
  int n; cin>>n;

  int arra[n];

  for(int i=0; i<n ;i++)
  {
      cin>>arra[i];
  }
  int maxi = 0,coun = 0;

  for(int j = n-1; j>= 0; j--)
  {
      if(maxi <= 0) coun++;

      maxi -= 1; // claw is decrease

      maxi = max(arra[j], maxi);
  }
  cout<<coun<<endl;
}
int32_t main()
{
    improve;

    ll t = 1;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}



