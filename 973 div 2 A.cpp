#include<iostream>
#include<cstring>
#include<algorithm>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long


void Solve()
{
   int n,x,y; // N = number of fruits he has

   cin>>n>>x>>y;

   // X =  the number of fruits the blender can blend per second

   // Y= the number of fruits he can put into the blender per second

   int mini = min(x,y);

   if(n%mini== 0) cout<<n/mini<<endl;

   else cout<<n/mini + 1<<endl;
}
signed main()
{
    improve;

    int _ ;cin>>_;

    while(_--)
    {
        Solve();
    }
    return 0;
}


