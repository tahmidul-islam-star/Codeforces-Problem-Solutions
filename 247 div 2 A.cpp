#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int a,b,c,d;string s;

    cin>>a>>b>>c>>d;

   cin.ignore();

   cin>>s;

   int ans=0;

   for(int i=0;i<s.size();i++){

   if(s[i]=='1') ans+=a;

   else if(s[i]=='2') ans +=b;

   else if(s[i]=='3') ans+= c;

   else ans +=d;

   }
   cout<<ans<<endl;

   return 0;
}
