#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long


void Solve()
{
    int l,r;cin>>l>>r;

    int even  =0,odd=0;

    for(int i =l ;i<=r;i++)
    {
       if(i%2 == 0) even++;

       else odd++;
    }
    /*
   3 to 7

   here 3 4 5

   gcd(3,4) = 1 , gcd (4,5) = 1, gcd(5,3)=1;

   2 odd 1 even number need for make 1 operation_canceled
   */
   cout<<min(odd/2,even)<<endl;
}
signed main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Solve();
    }
    return 0;


}


