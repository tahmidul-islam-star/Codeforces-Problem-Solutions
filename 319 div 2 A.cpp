#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long


void Solve()
{
   ll n,x;cin>>n>>x;

   ll coun = 0;

   for(ll i = 1;i<=n;i++)
   {
       if(x%i == 0 && x/i<=n) coun++; // x/i <n means divisor is not greater than n
   }
   cout<<coun<<endl;
}
signed main()
{
    improve;

    int _= 1;

    while(_--)
    {
        Solve();
    }
    return 0;
}




