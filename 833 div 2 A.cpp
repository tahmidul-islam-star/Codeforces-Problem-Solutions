#include<iostream>

using namespace std;

void Solve()
{
  int n;cin>>n;

  if(n%2) cout<<n/2+1<<endl;

  else cout<<n/2<<endl;
}
int main()
{
    int _;cin>>_;

    while(_--)
    {
     Solve();
    }
    return 0;
}
