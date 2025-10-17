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

     void solve()
     {
       int n;cin>>n;

       string s;cin>>s;

       string s1= s;

       reverse(s1.begin(),s1.end());

       if(s1== s) {cout<<0<<endl<<endl;return;}

       else{

          int coun =0;

          for(int i=0;i<n;i++)
          {
              if(s[i]=='0') coun++;
          }
          cout<<coun<<endl;

          for(int i=0;i<n;i++)
          {
              if(s[i]=='0'){

                cout<<i+1<<" ";
              }
          }
          cout<<endl;
       }
     }
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        solve();
    }
    return 0;
}






