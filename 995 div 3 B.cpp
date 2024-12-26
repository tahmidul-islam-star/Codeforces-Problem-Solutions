#include<iostream>

using namespace std;
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
    int n,a,b,c;cin>>n>>a>>b>>c;

    int fulstep = n/(a+b+c);

    n -= fulstep*(a+b+c);

    if(n==0) cout<<fulstep*3<<endl;

   else if(n-a<=0) cout<<fulstep*3+1<<endl;

   else if(n-a-b<=0) cout<<fulstep*3 +2<<endl;

   else cout<<fulstep*3 +3<<endl;

}
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Solve();
    }
    return 0;
}

