#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<cstdint>


using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define ll long long
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl


void Tahmid()
{
    ll n;cin>>n;

    vector<ll>vect;

    ll temp = 2;

   bool p= false;

    for(ll i=0;i<n;i++)
    {

        if(temp%3==2) {temp++;}

        vect.push_back(temp); temp++;

    }
    for(auto it: vect) cout<<it<<" ";

    cout<<endl;
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
