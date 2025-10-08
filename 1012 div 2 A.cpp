#include<iostream>

using namespace std;

void Solve()
{
    int x,y,a;cin>>x>>y>>a;

    a %=(x+y);

    if(x-0.5>a) cout<<"NO"<<endl;

    else cout<<"YES"<<endl;
}
signed main()
{
    int _;cin>>_;

    while(_--)
    {
     Solve();
    }
    return 0;
}

