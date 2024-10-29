#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long

/*MATH DISTANCE CALCULATE */

void Solve()
{
   int n;cin>>n;

   double arra1[n];

   double arra2[n];

   for(int i =0;i<n;i++)
   {
     cin>>arra1[i];

    cin>>arra2[i];
   }

   double dis = 0;

   for(int i =0;i<n ; i++)
   {
       dis += pow(arra2[i]- arra1[i],2);
   }
   cout<< setprecision(20)<<sqrt(dis)<<endl;
}
signed main()
{
    int _ =1;

    while(_--)
    {
        Solve();
    }
    return 0;
}


