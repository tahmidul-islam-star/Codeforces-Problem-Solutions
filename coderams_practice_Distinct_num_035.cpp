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
    int n ;cin>>n;

    set<int>myset;

    for(int i =0;i<n; i++)
    {
        int random;cin>>random;

        myset.insert(random);
    }
    cout<<myset.size()<<endl;
}
signed main()
{
    int _ =1;

    while(_--)
    {
        Solve();
    }
    return 0;
}
