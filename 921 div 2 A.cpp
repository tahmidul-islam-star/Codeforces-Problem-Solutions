#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Tahmid()
{
    int n,k;cin>>n>>k;

    string temp = "";

    for(char i = 'a' ; i< 'a'+k ;i++)
    {
        temp += i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp;
    }
    cout<<endl;
}
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Tahmid();
    }
    return 0;
}
