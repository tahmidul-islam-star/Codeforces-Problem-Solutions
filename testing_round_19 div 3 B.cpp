#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define ull unsigned long long

class Tahmid
{
public:

     ll Result()
    {
     ll a,b; cin>>a>>b;

     return 6-(a+b);
    }
};
signed main()
{
    improve;

    int _ =1;

    while(_--)
    {
        Tahmid obj;

         cout<<obj.Result()<<endl;
    }
    return 0;
}





