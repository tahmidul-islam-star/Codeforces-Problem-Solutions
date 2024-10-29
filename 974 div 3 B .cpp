#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<cstdint>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define ll unsigned long long
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

void Tahmid()
{
   int n,k ; cin>>n>>k;

   int odd = 0;

   if(n %2 == 0) odd = k/2 ;

   else odd = (k+1) /2 ;

   if(odd %2 == 0) yes;

   else no;
}
int32_t main()
{
    improve;

    ll t;cin>>t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}

