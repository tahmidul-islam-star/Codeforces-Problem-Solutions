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

     string result;

     for(int i=0;i<n/2 ;i++)
     {
         result += '0';
     }
     result += '1'; // i = n/2 th

     for(int i = n/2+1 ;i<n ;i++)
     {
         result +='0';
     }
     cout<<result<<endl;
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

