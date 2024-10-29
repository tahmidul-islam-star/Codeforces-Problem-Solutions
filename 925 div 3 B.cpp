#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Tahmid()
{

   ll n; cin>>n;

   ll arra[n]; ll sum = 0;

   for(ll i= 0; i<n ;i++)
   {
       cin>>arra[i]; sum += arra[i];
   }
   int aver = sum/n;

   for(int i = 0 ;i<n-1 ;i++) // stop second last element
   {
       if(arra[i] < aver) // according to the statement make equal from left to right
       {                          // if any smaller value found that means not possible
           cout<<"NO"<<endl; return;
       }
       else{

         int temp = arra[i] - aver;

         arra[i+1] += temp;
       }
   }
   cout<<"YES"<<endl;
}
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Tahmid();
    }
    return 0;
}


