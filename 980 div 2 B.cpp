#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdint>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long


void Solve()
{
       ll n,k;cin>>n>>k;

       ll arra[n];

       for(ll i =0;i<n;i++)
       {
           cin>>arra[i];
       }
       sort(arra,arra+n);

       ll ans =k;

       ll sub =0;

       for(ll i=0;i<n;i++)
       {
        arra[i] -= sub;

        k -= min(k,(n-i)*arra[i]);

        if(k==0) break;

        else{

        ans++;
        }
        sub += arra[i];
       }
       cout<<ans<<endl;
}
int32_t main()
{
    improve;

    ll _;cin>>_;

    while(_--)
    {
        Solve();
    }
    return 0;
}




