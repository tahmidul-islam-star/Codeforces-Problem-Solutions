#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

void Tahmid()
{
  int n;cin>>n;

  int arra[n];

  vector<int>vect;

  for(int i=0;i<n;i++)
  {
      cin>>arra[i];
  }
  for(int i=0;i<n-1;i++)
  {
      vect.push_back(max(arra[i],arra[i+1]));
  }
 //vect.resize();

 sort(vect.begin(),vect.end());

 cout<<vect[0]-1<<endl;

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


