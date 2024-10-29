#include<iostream>
#include<cstring>
#include<algorithm>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long


void Solve()
{
        ll a, b; cin >> a >> b;

        if (a >= b) {

            cout << a << endl;

        } else {

           /* let unprofitable deposit x so alice coin will be

           a = a-c -------(1) number equation

            Profitable" deposit decreases by 2x coins(from problem statement )

            so b = b - 2x (reduce) -----(2) number eqution

            now,

            a-x >= b-2x

          or, a-x+2x >= b

          or, a+x >= b

          or, x >= b-a

          now money ->

          a = a-c

             = a- (b-a)

             = 2a-b
            */
            if(2*a-b>0) cout<<2*a-b<<endl;

            else cout<<0<<endl;
        }
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



