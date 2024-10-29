#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define fo(i,a,b) for(int i=a;  i<b; i++)
#define endl '\n'

Solve()
{
     int n;cin >> n;

     string s1,s2;cin>>s1>>s2;

     int arra1[n],arra2[n],temp[n]={0};

     fo(i,0,n) arra1[i] = s1[i]-'0';

     fo(i,0,n) arra2[i] = s2[i]-'0';

     int coun =0;

     fo(i,0,n)
     {
      if(arra2[i]==1)
     {
        if(arra1[i]==0)
       {
         coun++;

         temp[i]=1;
       }
       else
       {
         if(i-1>=0 && temp[i-1]==0 && arra1[i-1]==1)
        {
          coun++;

          temp[i-1]= 1;
        }
        else if(i+1<=n-1 && temp[i+1]==0 && arra1[i+1]==1)
        {
          coun++;

          temp[i+1] = 1;
        }
       }
      }
     }
    cout << coun<< endl;
}
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
      Solve();
    }
    return 0;
}
