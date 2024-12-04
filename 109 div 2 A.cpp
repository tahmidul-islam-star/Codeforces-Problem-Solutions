#include<iostream>

using namespace std;

void Solve()
{
    int n;cin>>n;

    int arra[n];

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    int maxi =arra[0];

    int mini = arra[0];

    int coun =0;

    for(int i=1;i<n;i++)
    {
        if(arra[i]>maxi){

            coun++;

            maxi = arra[i];
        }
         if(arra[i]<mini){

            coun++;

            mini = arra[i];
        }
    }
    cout<<coun<<endl;
}
int main()
{
  Solve();

  return 0;
}
