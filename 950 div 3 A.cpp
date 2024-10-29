#include<iostream>
#include<algorithm>
#include<set>
#include<cmath>

using namespace std;

#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)


void Tahmid()
{
    ll a,b;cin>>a>>b;

    string s;cin>>s;

    ll couna=0,counb=0,counc=0,cound=0,coune=0,counf=0,coung=0;

    for(ll i=0;i<a ;i++)
    {

        if(s[i]=='A') couna++;

        else if(s[i]=='B') counb++;

        else if(s[i]=='C') counc++;

        else if(s[i]=='D') cound++;

        else if(s[i]=='E') coune++;

        else if(s[i]=='F') counf++;

        else coung++;
    }

    ll sum=0;

    while(b--)
    {
        couna--,counb--,counc--,cound--,coune--,counf--,coung--;
    }
    if(couna<0)
    {
        sum += abs(couna);
    }
    if(counb<0)
    {
        sum += abs(counb);
    }
    if(counc<0)
    {
        sum += abs(counc);
    }
    if(cound<0)
    {
        sum += abs(cound);
    }
    if(coune<0)
    {
        sum += abs(coune);
    }
    if(counf<0)
    {
        sum += abs(counf);
    }
    if(coung<0)
    {
        sum += abs(coung);
    }

        cout<<sum<<endl;
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
