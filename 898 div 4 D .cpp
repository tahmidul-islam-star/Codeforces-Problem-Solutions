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
    ll n,k;cin>>n>>k;

    string s;cin>>s;

    int coun=0;

    for(ll i=0;i<n;  )
    {

        if(s[i]=='B'){

            coun++;

            i += k;
        }
       else i++;
    }
    cout<<coun<<endl;

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

