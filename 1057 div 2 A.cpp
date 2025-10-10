#include<iostream>
#include<set>

using namespace std;

void Solve()
{
    int n;cin>>n;

    set<int>p;

    for(int i=0;i<n;i++)
    {
        int x;cin>>x;

        p.insert(x);
    }
    cout<<p.size()<<endl;
}
signed main()
{
    int t;cin>>t;

    while(t--)
    {
        Solve();
    }
}
