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
      int a,b; cin>>a>>b;

      if(b>a){

        swap(a,b);
      }
      // checking odd using bitwise AND

      if( (a&1 and b&1)  or ( b&1 and b*2 == a ) ) return "NO";

      return "YES";

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


