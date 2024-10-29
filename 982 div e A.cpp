#include<iostream>
#include<cstring>
#include<algorithm>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long


// Alhamdulillah

void Solve()
{
       int n;cin>>n;

       int arra1[n],arra2[n];

       int sum =0;

       for(int i=0;i<n;i++)
       {
           cin>>arra1[i]>>arra2[i];

       }
       sort(arra1,arra1+n,greater<int>());

       sort(arra2,arra2+n,greater<int>());

       sum += arra1[0]+arra1[n-1]+arra2[0]+arra2[n-1];

       //cout<<sum<<endl;

       int temp1= arra1[0];

       int temp2= arra2[0];

       for(int i=1;i<n;i++)
       {
           sum+= temp1-arra1[i];

           temp1 = arra1[i];

           sum+= temp2-arra2[i];

           temp2 = arra2[i];
       }
       cout<<sum<<endl;
}
signed main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Solve();
    }
    return 0;
}




