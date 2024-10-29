#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

#define ll long long
#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)


//Alhamdulillah Alhamdulillah

class Tahmid
{
  public:

    ll solve()
    {
        int n;cin>>n;

        int arra[n];

        for(int i=0; i<n;i++)
        {
            cin>>arra[i];
        }
        int coun=1;

        int maxi = 1;

        for(int i=0 ;i<n-1; i++)
        {
            if(arra[i]<=arra[i+1])
            {
                coun++;

                //cout<<coun<<endl;
            }
            else
            {
                maxi = max(maxi,coun);

                coun= 1;
            }
        }
        return max(maxi,coun);
    }
};
signed main()
{
    improve;

    int _=1;

    while(_--)
    {
        Tahmid obj;

        cout<<obj.solve()<<endl;
    }
    return 0;
}


