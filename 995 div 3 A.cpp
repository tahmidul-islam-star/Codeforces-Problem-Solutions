#include<iostream>

using namespace std;
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
    int n;cin>>n;

    int arra1[n],arra2[n];

    for(int i=0;i<n;i++) cin>>arra1[i];

    for(int i=0;i<n;i++) cin>>arra2[i];

    int maxi = arra1[n-1];

    for(int i=0;i<n-1;i++)
    {
        int temp = arra1[i]-arra2[i+1];

        if(temp>0) maxi += temp;
    }
    cout<<maxi<<endl;
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
