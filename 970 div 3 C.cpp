 #include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<queue>
#include<cstdint>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define ll unsigned long long
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

void Tahmid()
{
   int l,r ;cin>>l>>r;

   int k  = 1;

   int i = l;

   while( i<= r)
   {
       i += k;

       k++;
   }
   cout<<k-1<<endl;
}
int32_t main()
{
    improve;

    ll t; cin>>t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}



