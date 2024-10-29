#include<iostream>
#include<set>

using namespace std;

void Tahmid()
{
   string s;

   bool p= false;

   for(int i=0;i<8;i++)
   {
       cin>>s;

       if(s=="RRRRRRRR") p= true;
   }
   if(p) puts("R");

   else puts("B");
}
int main()
{
    int t;cin>>t;

    while(t--)
    {
        Tahmid();
    }

    return 0;
}

