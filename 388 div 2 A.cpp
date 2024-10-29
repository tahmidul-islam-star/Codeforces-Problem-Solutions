#include<iostream>
#include<cstring>

using namespace std;


void Tahmid(int n)
{
    cout<<n/2<<endl;

    int t= n/2;

   if(n%2 != 0){

    cout<<3<<" ";

     t -=1;
   }
   for(int i=0;i<t;i++) cout<<2<<" ";

}
int main()
{
    int n;cin>>n;

    Tahmid(n);

    return 0;
}
