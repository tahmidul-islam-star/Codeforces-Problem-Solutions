#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;

        int arra[n];

        for(int i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        if(n%2 !=0) cout<<"YES"<<endl;

        else
        {
         sort(arra,arra+n,greater<int>());

         int coun1=0,coun2=0;

         for(int i=0; i<n-1;i +=2)
         {
             if(arra[i] > arra[i+1]) coun1++;

             else if(arra[i]<arra[i+1]) coun2++;

             else continue;
         }
         if( coun1>coun2) cout<<"YES"<<endl;

         else cout<<"NO"<<endl;
        }
    }
    return 0;
}
