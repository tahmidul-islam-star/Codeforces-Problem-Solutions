#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define ull unsigned long long

//After 3 hour

//Alhamdulillah

class Tahmid
{
public:

     ll Result()
    {
      ll n;cin>>n;

      ll coun1 =0,coun2=0,coun3=0,coun4=0,coun5=0;

     coun1 = n/15; n %= 15;

     coun2 = n/10; n %=10;

     coun3 = n/6; n %=6;

     coun4 = n/3; n %=3;

     coun5 = n;

     if(coun1>=1 && coun4>=1 && coun5 >=2)
     {
         coun1 -= 1; // 15

         coun4 -= 1; // 3

         coun5 -= 2; // 2    // Total 20 Taka

          coun2 += 2; // that means 4 note = 2-> 10 taka note
     }
     if(coun1>= 1 && coun3>=1 && coun5>=2)
     {
         coun1 -= 1; // 15

         coun3 -= 1; // 6

         coun5 -= 2 ;//  2    // Total 23 taka 4 note = 2 -> 10 taka note + 1-> 3 taka note

         coun2 += 2; // 20 taka

         coun4 += 1;// 3 taka

         // so equal
     }
     if(coun2>=1 and coun5>=2)
     {
         coun2 -= 1;// 10 taka

         coun5 -= 2;// 2 taka

         coun3 += 2; // 12 taka

         // here 6 taka 2 note == 10 taka 1 note 1 taka 2 note
     }
     return coun1+coun2+coun3+coun4+coun5;
    }
};
signed main()
{
    improve;

    int _; cin>>_;

    while(_--)
    {
        Tahmid obj;

         cout<<obj.Result()<<endl;
    }
    return 0;
}




