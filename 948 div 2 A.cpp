#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;

#define T int t ; cin>>t; while(t--)
#define improve ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
   improve;

   T{

       int a,b;cin>>a>>b;

       if(b>a or (a-b)%2)  no;

       else yes;
   }

return 0;

}


