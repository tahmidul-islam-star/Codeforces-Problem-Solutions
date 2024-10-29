#include <iostream>
#include <vector>
#include <string>
#include<set>

using namespace std;

#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define improve ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop  for(int i=0;i<n;i++)


void Tahmid() {

        int n; cin >> n; int arra[n];

        loop { cin >> arra[i];}

          int len=0;

          set<int>p;

          for(int i=0;i<n;i++)
          {
              if(arra[i] == 0) len++;

              if(arra[i]==1)
              {
                  p.insert(len);

                  len =0;
              }
          }
          p.insert(len);

          if(p.size()==0) cout<<"0"<<endl;

          else{

          auto it= p.rbegin();

          cout<<*it<<endl;
          }
}

int main() {

    int t;cin>>t;

    while(t--)
  {
     Tahmid();
  }
    return 0;
}

