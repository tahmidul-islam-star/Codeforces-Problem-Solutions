#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;

#define f1 for(int i=0;i<n;i++)
#define f2 for(int j=1;j<=n;j++)
#define endl '\n'
#define int long long

int Tahmid()
{
    int n;cin>>n;

    return n/2;
}
signed main()
{
    int t;cin>>t;

    while(t--)
    {
       int res=Tahmid();

       cout<<res<<endl;;

    }

    return 0;
}

