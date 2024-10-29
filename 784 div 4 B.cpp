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

     int solve()
     {
      int n;cin>>n;

     // int arra[n];

      int freq[n+1]={0};

      int value = -1;

      for(int i =0 ;i<n ;i++)
      {
          int x;cin>>x;

          freq[x]++;

          if(freq[x]>= 3){

            value = x;
          }
      }
    //  sort(freq,freq+n+1,greater<int>());

      return value;
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



