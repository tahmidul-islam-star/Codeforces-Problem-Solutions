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

     int Result()
    {
      int n;cin>>n;

      int arra[n];

      for(int i=0;i<n;i++)
      {
          cin>>arra[i];
      }
      int maxi = -1;

      for(int i=0;i<n; i+=2)
      {
          maxi = max(maxi,arra[i]);
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


