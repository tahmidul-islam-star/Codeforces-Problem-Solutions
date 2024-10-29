#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

#define f1 for(int i=0;i<n;i++)
#define f2 for(int j=1;j<=n;j++)
#define endl '\n'

void solve()
{
  int n; cin >> n;

        int res = 2;

        int sum1 = 0;

        for (int i = 2; i<= n; i++) {

            int temp = n / i;

            //x+2x+3x+...+kx

            // common x*(1+2+3+.....k);

            // so x*(n*(n+1))/2;

            int sum2 =  i* (temp* (temp + 1)) / 2;

            if (sum2 > sum1) {

                sum1 = sum2;

                res = i;
            }
        }

        cout << res << endl;

}
int main()
{
    int t;cin>>t;

    while(t--)
    {
    solve();
    }
    return 0;
}


