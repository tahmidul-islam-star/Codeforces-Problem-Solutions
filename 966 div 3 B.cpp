#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define improve ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop  for(int i=0;i<n;i++)


void Tahmid() {

    int n; cin>>n;

    int arra[n];

   loop {cin>>arra[i];}

   int left = arra[0], right = arra[0];

   for(int i = 1; i< n ; i++)
   {
       if(arra[i]+1 == left) left = arra[i];

       else if(arra[i]-1 == right) right = arra[i];

       else { no; return;}
   }
   yes;
}
int main() {

    improve;

    int _ ; cin>>_;

    while(_--)
  {
     Tahmid();
  }
    return 0;
}

