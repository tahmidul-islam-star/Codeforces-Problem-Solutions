#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)


ll Result(vector<ll> &even, vector<ll> &odd)
{
    ll s1= even.size();

    ll s2= odd.size();

    ll maxi= odd.back(); // maximum element (odd) vector

    ll ans =0;

    for(ll i =0; i<s1;i++)
    {
        if(even[i]>maxi)
        {
            return s1+1; //when even value is greater than maximum value (odd)
        }
        else
        {
            /* for same parity all element should be even or all element should be odd

            so if i want to convert same parity we can make all element odd but cannot make odd to even

             because we know even+odd == always odd

            minimum even + maximum odd then new maximum odd found

            and update maximum value of (odd vector) store new maximum value at maxi variable */

            ans++;

            maxi += even[i];
        }
    }
    return ans;
}
void Solve()
{
   ll n,random;cin>>n;

   vector<ll> even,odd;

   for(ll i = 0;i<n;i++)
   {
      cin>>random;

      if(random%2 ==0) even.push_back(random);

      else odd.push_back(random);
   }
   if(odd.size()== 0 or even.size()==0){

    cout<<0<<endl; // if all are even or all are odd

   return ;
   }
   sort(odd.begin(),odd.end());

   sort(even.begin(),even.end());

   ll mini = Result(even,odd);

   cout<<mini<<endl;
}
signed main()
{
    improve;

    ll _;cin>>_;

    while(_--)
    {
      Solve();
    }
    return 0;
}



