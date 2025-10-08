#include<iostream>

using namespace std;

void Solve()
{
    int n;cin>>n;

    int arra[n];

    for(int i = 0;i<n ;i++)
    {
     cin>>arra[i];
    }
    int zero = 3,one = 1, two = 2, three = 1, five = 1;

    for(int i=0;i<n;i++)
    {
        if(arra[i]== 0) zero--;

        else if(arra[i]==1) one--;

        else if(arra[i]== 2) two--;

        else if(arra[i]==3) three--;

        else if(arra[i]==5) five--;

        if(zero<=0 and one<=0 and two<=0 and three<=0 and five<=0)
        {
            cout<<i+1<<endl;

            return;
        }
    }
    cout<<0<<endl;
}
signed main()
{
    int _;cin>>_;

    while(_--)
    {
     Solve();
    }
    return 0;
}
