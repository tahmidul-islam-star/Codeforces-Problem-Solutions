#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long


void Solve()
{
   int a,v;cin>>a>>v;

   int mini = min(a,v);

   if(mini%2) cout<<"Akshat"<<endl;

   else cout<<"Malvika"<<endl;
}
signed main()
{
   improve;

    int _ = 1;

    while(_--)
    {
        Solve();
    }
    return 0;
}
