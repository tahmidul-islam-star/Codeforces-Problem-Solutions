#include<iostream>

using namespace std;
#define int long long

signed main()
{
    int t;cin>>t;

    while(t--)
    {
     int n,m,x,y;cin>>n>>m>>x>>y;

     int arra[n],arra2[m];

     for(int i=0;i<n;i++)
     {
         cin>>arra[i];
     }
     for(int i=0;i<m;i++)
     {
         cin>>arra2[i];
     }
     cout<<n+m<<endl;
    }
    return 0;
}
