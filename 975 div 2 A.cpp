#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

#define ll long long
#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)


class Tahmid
{
  public:

    ll solve()
    {
        int n;cin>>n;

        int arra[n];

        int maxi = -1;

        for(int i=0; i<n;i++)
        {
            cin>>arra[i];

            maxi = max(arra[i],maxi);
        }
        if(n%2 == 0) return n/2+maxi;

        else
        {
            //cout<<maxi<<endl;

            bool ok1 = 0,ok2 = 0;

            for(int i = 0;i<n;i++)
            {
                if(arra[i] == maxi)
                {
                  //  cout<<" i" <<"= "<<i<<endl;

                    if(i%2 == 0) ok2 = 1;

                    else ok1 =1;
                }
            }
            //cout<<ok1<<endl<<ok2<<endl;

            if((ok1 and ok2) || ok2 ) return n/2+1+maxi;

            if(ok1 and !ok2) return n/2+maxi;
        }
    }
};
signed main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Tahmid obj;

        cout<<obj.solve()<<endl;
    }
    return 0;
}
