#include<iostream>

using namespace std;

void Tahmid()
{
    int n,coun=0;cin>>n;

    int arra[n];

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];

        if(arra[i]%2 !=0) coun++;
    }
    if(coun%2==0) cout<<"YES"<<endl;

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
