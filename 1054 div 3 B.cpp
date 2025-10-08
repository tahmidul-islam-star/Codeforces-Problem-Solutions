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

     for(int i=0;i<n;i++)
     {
        cin>>arra[i];
     }
     sort(arra,arra+n);

     int maxi = INT_MIN;

     for(int i=1;i<n;i +=2)
     {
         int curr = abs(arra[i-1] - arra[i]);

         maxi = max(curr,maxi);
     }
     cout<<maxi<<endl;
    }
    return 0;
}
