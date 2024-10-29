#include<iostream>

using namespace std;
#define int long long


void Tahmid()
{
    int n,a,b;cin>>n>>a>>b;

    if(a>= b){

        cout<<n*a<<endl;
    }
    else{


    int sum =0;

     sum= (b*(b+1))/2;

     int sum2= (a*(a+1))/2;


     cout<<sum-sum2<<endl;

     int rem = n-(b-a);

     cout<<sum-sum2 + rem*a<<endl;

    }

    }

signed main()
{
    int t;cin>>t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}
