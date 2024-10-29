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

// Alhamdulilla

class Tahmid
{
 public:

     string solve()
     {
      int n;cin>>n;

      int arra[n];

      for(int i=0; i<n ;i++)
      {
          cin>>arra[i];
      }
      bool even1 = 1,odd1 =1,even2=1,odd2=1,same =1,all_even=1,all_odd=1;

      for(int i=0; i<n-1;i++)
      {
          if(arra[i] != arra[i+1]){

            same = 0;

            break;
          }
      }
      if(same ) return "YES";

      if(arra[0]%2 == 0)
      {
          for(int i=0;i<n;i++)
          {
              if(arra[i]%2 !=0)
              {
                  all_even =0;

                  break;
              }
          }
          for(int i= 2;i<n;i+=2)
          {
              if(arra[i]%2 !=0)
              {
                  even1 = 0;

                  break;
              }
          }
          for(int i= 1;i<n;i+=2)
          {
              if(arra[i]%2 == 0)
              {
                  odd1 = 0;

                  break;
              }
          }
          if((even1 and odd1) or all_even) return "YES";
      }
      else
      {
           for(int i=0;i<n;i++)
          {
              if(arra[i]%2 ==0)
              {
                  all_odd =0;

                  break;
              }
          }
          for(int i= 2;i<n;i+=2)
          {
              if(arra[i]%2 ==0)
              {
                  odd2 = 0;

                  break;
              }
          }
          for(int i= 1;i<n;i+=2)
          {
              if(arra[i]%2 != 0)
              {
                  even2 = 0;

                  break;
              }
          }
          if((even2 and odd2) or all_odd) return "YES";
      }
     return "NO";
     }
};
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Tahmid obj;

       cout<< obj.solve()<<endl;
    }
    return 0;
}




