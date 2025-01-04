#include<iostream>

using namespace std;

signed main()
{
    int t;cin>>t;

    while(t--){

    int n;cin>>n;

    int arra[n];

    for(int i=0;i<n;i++)
    {
    cin>>arra[i];
    }
    bool ok =0;

    for(int i=0;i<n-1;i++)
    {
        if(arra[i]*2>arra[i+1] && arra[i+1]*2>arra[i])

       { ok =1;cout<<"YES"<<endl;break;}
    }
    if(!ok)cout<<"NO"<<endl;
    }
    return 0;
}
