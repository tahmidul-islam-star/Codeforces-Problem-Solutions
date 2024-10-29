#include<iostream>
#include<algorithm>

using namespace std;

void Solve()
{
    int a,b,n;cin>>a>>b>>n;

    int ok =0,ok1 = 0;

    while(n)
    {
        {
          n -= __gcd(a,n);

          if(n==0){

            ok = 1; break;
          }
          {
              n -= __gcd(b,n);

              if(n == 0)
              {
                  ok1 = 1; break;
              }
          }
        }
    }
    if(ok) cout<<0<<endl;

    else cout<<1<<endl;
}
signed main()
{
    int _ = 1;

    while(_--)
    {
      Solve();
    }
    return 0;
}
