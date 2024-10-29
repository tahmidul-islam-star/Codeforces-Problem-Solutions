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

        ll sum = 0;

        for(int i=0; i<n;i++)
        {
            cin>>arra[i];

            sum += arra[i];
        }
        if(sum%3 ==0) return 0;

        else{

            int rem = sum%3;

            rem = 3 - rem;

            if(rem == 1) return 1;

            else{ // rem == 2

            bool p = 0;

            int temp = sum;

            for(int i =0 ;i<n;i++)
            {
                temp = sum;

                if(arra[i]%3 !=0)
                {
                    temp -= arra[i];

                    if(temp%3== 0){

                        p = 1;

                        break;
                    }
                }
            }
            if(p) return 1;

            return 2;

            }
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

