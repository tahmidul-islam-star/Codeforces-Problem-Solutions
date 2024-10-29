#include<iostream>

using namespace std;

void Tahmid()
{
   int r,c;cin>>r>>c;

   for(int i=0;i<r;i++)

   {
       for (int j=0;j<r;j++)
       {
           if(i== j) cout<<c<<" ";

           else cout<<"0 ";
       }
       cout<<endl;
   }
   cout<<endl;
}
int main()
{
    Tahmid();

    return 0;
}

