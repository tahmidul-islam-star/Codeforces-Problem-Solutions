#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
     int n;cin>>n;

     string s; cin>>s;

     int arra[4] = {0};

     for(int i =0; i<s.size();i++)
     {
         if(s[i]=='A') arra[0]++;

         else if(s[i]=='B') arra[1]++;

         else if(s[i]=='C') arra[2]++;

         else if(s[i]=='D') arra[3]++;
     }
     int point =0;

     for(int i =0 ;i<4 ;i++)
     {
         if(arra[i]>n)
         {
             point += n;
         }
         else point += arra[i];
     }
     cout<<point<<endl;
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


