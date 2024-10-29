#include<iostream>
#include<algorithm>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define f1 for(int i=0;i<n;i++)
#define f2 for(int j=0;j<n;j++)
#define int long long
#define endl '\n'

inline void Tahmid()
{
    int h,n;cin>>h>>n;

    int arra1[n],arra2[n];

    f1{cin>>arra1[i];}

    f2{cin>>arra2[j];}

    int low= 0,ans=0;

    // 1×10^13 large number upper bound ;

    int high= 1e11;

     while(low<=high)
     {
         int los=0;

         int mid=(low+high)/2;

         f1{
               //total damage calculate

               los +=((mid + arra2[i]-1)/ arra2[i]*arra1[i]);

               if(los>= h) break;
             }

          if(los>= h)
          {
              ans = mid;

              high = mid-1;
          }

          else low= mid+1;
     }
    // print either lower bound or mid point

    cout<<ans<<endl;

}
signed main()
{
    improve;

    int t;cin>>t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}
