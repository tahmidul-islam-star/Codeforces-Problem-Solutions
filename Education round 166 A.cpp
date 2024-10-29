#include<iostream>

using namespace std;


void Tahmid()
{
    int n;cin>>n;

    string s;cin>>s;

    bool p= true;

    for(int i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1]){

            p= false;

            break;
        }
    }
    if(p) cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}
int main()
{
    int t;cin>>t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}
