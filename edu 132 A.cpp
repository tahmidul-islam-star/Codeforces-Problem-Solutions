#include<iostream>
#include<cstring>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Solve()
{
   int x;

   cin>>x;

   int arra[4];

   for(int i = 1;i<=3;i++)
   {
       cin>>arra[i];
   }
   int temp = arra[x];

   if(temp == 0 or arra[temp]== 0) cout<<"NO"<<endl;

   else cout<<"YES"<<endl;
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
