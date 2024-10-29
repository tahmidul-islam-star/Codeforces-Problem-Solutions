#include<iostream>
#include<cmath>
#include<algorithm>
#include<set>
#include<cstring>

using namespace std;

#define loop for(int i=0;i<n;i++)
#define ll long long
#define sz s.size()

//  Alhamdulillah


void Tahmid()
{
    int n;cin>>n; int arra1[n];

   loop{ cin>>arra1[i];}

   int val;string arra2[n];

   loop {cin>>val>>arra2[i];}

   loop
   {
       int temp= 0; temp= arra1[i];

       string s= arra2[i];

       for(int i=0;i<sz;i++)
       {
           if(s[i]=='D')

           { temp++; if( temp > 9 ) temp=0; }

           else
           {
               temp--; if(temp<0) temp = 9;
           }
       }
       cout<<temp<<" ";
   }
   cout<<endl;

}
int main()
{
    int t;cin>>t;

    while(t--){

        Tahmid();
    }

    return 0;
}

