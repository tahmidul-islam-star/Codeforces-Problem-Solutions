#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

#define f1 for(int i=0;i<n;i++)
#define f2 for(int j=1;j<=n;j++)
#define endl '\n'

void Tahmid()
{
  string s1,s2;cin>>s1>>s2;

  int temp1= s1[0];

  int temp2= s2[0];

  s1[0]= temp2;

  s2[0]=temp1;

  cout<<s1<<" "<<s2<<endl;
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

