#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;


void Solve()
{
    int n;cin>>n;

    int error1 =0, error2 =0;

    int sum =0;

    for(int i = 0;i<n ;i++)
    {
        int random;cin>>random;

        sum += random;
    }
    int temp1 =0;

    for(int i=0; i<n-1;i++)
    {
        int random;cin>>random;

        temp1 += random ;
    }
    int temp2 =0;

    for(int i=0;i<n-2;i++)
    {
        int random;cin>>random;

        temp2+= random;
    }
    error1 = sum - temp1;

    error2 = sum - error1 - temp2;

    cout<<error1<<endl<<error2<<endl;
}
signed main()
{
    int _ =1;

    while(_--)
    {
      Solve();
    }
    return 0;
}


