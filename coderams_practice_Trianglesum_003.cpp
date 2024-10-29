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
    int n;cin>>n;

    ll sum  = 0;

    for(int i =0;i< n;i++)
    {
        int random ;cin>>random;

        sum += (3*random);
    }
    cout<<sum<<endl;
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

