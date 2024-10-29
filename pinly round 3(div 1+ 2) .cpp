#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<set>

using namespace std;

#define endl '\n'
#define loop  for(int i=0;i<n;i++)
#define ll long long
#define improve ios_bse::sync_with_stdio(0),cin.tie(0),cout.tie(0)

class Tahmid {

public:

     ll solve(){

     ll n;cin>>n;

      ll arra[n];

      for(ll i = 0; i<n ;i++)
      {
          cin>>arra[i];
      }
      sort(arra,arra+n);

      ll k = 0;

      for(ll i = 1 ; i<n;i++)
      {
          k =  __gcd(k,(arra[i]-arra[0]));
      }
      return k*2;
      }
};
int main() {

    int _; cin>>_;

    while(_--)
  {
     Tahmid obj;

     cout<<obj.solve()<<endl;
  }
    return 0;
}



