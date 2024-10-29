#include<iostream>
#include<algorithm>
#include<set>
#include<cmath>

using namespace std;

#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define may cout<<"MAYBE"<<endl


void Tahmid()
{
    ll a,b,c;cin>>a>>b>>c;

    string s;cin>>s;

    if(b>=a) {yes;return;}

    else{

        ll coun=0,coun1=0;

        for(ll i=0;i<c;i++)
        {

         if(s[i]=='+') {

        coun++,coun1++;

         if((coun+b)>= a) {yes;return;}

         }
         else coun--;

        }
        if((coun1+b)>=a) {may; return;}

        else no;

    }
}

int main()
{
    improve;

    ll t;

    cin>>t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}

