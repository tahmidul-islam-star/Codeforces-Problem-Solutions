#include<iostream>

using namespace std;

void solve()
{
    int n,k;cin>>n>>k;

    if(n==1) puts("1");

    else if(k==1) cout<<n<<endl;

    else{

        n -= 1;

        cout<<k*n +1<<endl;

    }
}
int main()
{
    int t;cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}
