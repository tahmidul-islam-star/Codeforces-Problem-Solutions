#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n,k;cin>>n>>k;

        n -=1 , k-=1;

        if(n%k== 0) cout<<n/k<<endl;

        else cout<<n/k+1<<endl;
    }
    return 0;
}
