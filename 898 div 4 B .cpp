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
    ll n;cin>>n;

    int coun=0;

    ll arra[n]; for(ll i=0;i<n;i++){ cin>>arra[i];if(arra[i]==0) coun++;}

    sort(arra,arra+n);

   if(arra[1]==0) cout<<"0"<<endl;

   else{

    //sort(arra,arra+n);

    ll prod= 1;

   arra[0] +=1;

     for(ll i=0;i<n;i++){

        prod *= arra[i];
    }

      cout<<prod<<endl;

    }

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
