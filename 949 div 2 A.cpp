#include<iostream>

using namespace std;

#define ll long long
#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Tahmid()
{
    ll a,b;cin>>a>>b;

    int coun=0;

    ll random=1;

    while(2*random<= b)
    {
        random *= 2;

        coun++;
    }
    cout<<coun<<endl;
}
int main()
{
    improve;

    ll t;cin>>t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}
