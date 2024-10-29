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

       int maxi1= 0,maxi2 =0;

       for(int i=0;i<n;i++)
       {
           cin>>arra1[i]>>arra2[i];

           maxi1= max(maxi1,arra1[i]);

           maxi2= max(maxi2,arra2[i]);
       }

      // we know perimeter (rectangle) = 2*(length+wide)

      cout<<2*(maxi1+maxi2)<<endl;
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





