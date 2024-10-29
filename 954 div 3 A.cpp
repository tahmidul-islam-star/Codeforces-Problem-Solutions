#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
      int arra[3];

      for(int i=0;i<3;i++)
      {
          cin>>arra[i];
      }
      sort(arra,arra+3);

      cout<<arra[2]-arra[0]<<endl;

    }
    return 0;
}
