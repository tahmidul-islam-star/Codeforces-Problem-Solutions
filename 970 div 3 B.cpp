#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<set>
#include<map>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

class Tahmid
{
 public:

     string solve()
     {
     int n;cin>>n;

     string s;cin>>s;

     int coun = count(s.begin(),s.end(),'1');

     int require = 4*( sqrt(n) -1);

      if(coun == require ) return "YES";

       return "NO";
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

