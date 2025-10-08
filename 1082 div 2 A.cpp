#include<iostream>

using namespace std;

signed main()
{
    int t;cin>>t;

    while(t--)
    {
     int n;cin>>n;

     int arra[n];

     int sum =0;

     for(int i=0;i<n;i++)
     {
         cin>>arra[i];

         sum += arra[i];
     }
     if(sum%3 ==0) cout<<1<<" "<<2<<endl;

     else cout<<0<<" "<<0<<endl;
    }
    return 0;
}
