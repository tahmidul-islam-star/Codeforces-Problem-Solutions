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
       ll n;cin>>n;

       ll arra[n];

       for(ll i=0;i<n;i++)
       {
           cin>>arra[i];
       }
      ll mini = n;

      for (ll i = 0; i < n; i++) {

     ll coun = 0;

     ll temp = i; // total number of deletion left side for ith element

     for (ll j = i+1; j < n; j++) {

     if (arra[i] < arra[j]) {

     coun++;
    }
    }
    // coun is total number of deletion right side for ith element

     mini = min(mini, temp+coun);

     // then same process for all other element

     // here i take every element as first then calculate how many element we need to remove
    }
    cout<< mini<<endl;

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





