#include<iostream>

using namespace std;
#define int long long

void Solve()
{
    int n,k;cin>>n>>k;

    string s;cin>>s;

    int coun =0;

    for(int i=0;i<n;i++)
    {
        if(s[i] == '1') coun++;
    }
    if(coun >k and n>=2*k) cout<<"Bob"<<endl;

    else cout<<"Alice"<<endl;
}
signed main()
{
    int t;cin>>t;

    while(t--)
    {
    Solve();
    }
    return 0;
}

