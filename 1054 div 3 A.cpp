#include<iostream>
#include<algorithm>

using namespace std;

signed main()
{
    int t;cin>>t;

    while(t--)
    {
     int n;cin>>n;

     int arra[n];

     int c1 =0;

     int c2 =0;

     for(int i=0;i<n;i++)
     {
        cin>>arra[i];

        if(arra[i]==0) c1++;

        if(arra[i] == -1) c2++;
     }
     if(c2%2 ==0) cout<<c1<<endl;

     else cout<<c1+2<<endl;

    }
    return 0;
}

