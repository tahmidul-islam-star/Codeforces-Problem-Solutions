#include<iostream>

using namespace std;

signed main()
{
    int t;cin>>t;

    while(t--)
    {
        int a,b;cin>>a>>b;

        if(a==b) cout<<0<<endl;

        else if(a*b == b or a*b==a) cout<<1<<endl;

        else cout<<2<<endl;
    }
}
