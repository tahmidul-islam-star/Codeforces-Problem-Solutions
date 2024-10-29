#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>


using namespace std;

#define improve ios_base::sync_with_stdio(0),cint.tie(0),cout.tie(0)
#define endl '\n'
#define ll long long
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl


void Tahmid()
{
    ll n,k,x;cin>>n>>k>>x;

    ll sum1=0,sum2=0,temp=0;

    if(k>n) {no;return;}

    else{

     sum1 = (n*(n+1))/2;

     sum2 = (k*(k+1))/2;

     temp = n-k;

    //cout<<sum1<<" "<<sum2<<endl;

    //cout<<temp<<endl;

    sum1 -= (temp*(temp+1))/2;

    //cout<<sum1<<endl;

      if(sum1<x or sum2>x){

        no; return;
    }
    else yes;

    }
}

int32_t main()
{
    ll t;cin>>t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}
