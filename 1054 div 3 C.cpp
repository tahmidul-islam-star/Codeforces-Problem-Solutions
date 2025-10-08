#include<iostream>
#include<algorithm>

using namespace std;
#define int long long

signed main()
{
    int t;cin>>t;

    while(t--)
    {
     int n,k;cin>>n>>k;

     int arra[n];

     int c1 =0;

    for(int i=0;i<n;i++)
    {
    cin>>arra[i];

    if(arra[i]==k) c1++;
    }
    if(c1==0) cout<<0<<endl;

    else cout<<c1<<endl;

    }
    return 0;
}


