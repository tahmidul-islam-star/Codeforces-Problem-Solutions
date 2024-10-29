#include<iostream>
#include<vector>


using namespace std;

#define f1 for(int i=0;i<n;i++)
#define f2 for(int j=1;j<=n;j++)
#define endl '\n'

void Tahmid()
{
    int n;cin>>n; int arra[n];

    f1 {cin>>arra[i];}

    f2 { f1 { if(arra[i]==j){ cout<<i+1<<" ";} } }

    cout<<endl;
}
int main()
{
    Tahmid();

    return 0;
}
