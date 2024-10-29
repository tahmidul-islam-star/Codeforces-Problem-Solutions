#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<set>
#include<map>

using namespace std;

#define endl '\n'
#define ll unsigned long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

// Alhamdulilla

class Tahmid
{
 public:

     ll solve()
     {
      ll n;cin>>n;

      ll power = (ll)(n+1)*(n+1);

      //cout<<power<<endl;

      return (ll)power+1;
     }
};
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Tahmid obj;

       cout<< obj.solve()<<endl;
    }
    return 0;
}





