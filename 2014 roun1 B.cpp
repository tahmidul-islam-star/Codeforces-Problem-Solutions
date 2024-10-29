#include <iostream>
#include<algorithm>

using namespace std;

#define endl '\n'
#define loop  for(int i=0;i<n;i++)

// try to use OOP concept (2nd problem)

class Tahmid {

public:

     int solve(){

           int n,k; cin >> n>>k; int arra[n];

           loop { cin >> arra[i];}

           sort(arra,arra+n);

           return arra[n-k];
      }
};

int main() {

    int t=1;

    while(t--)
  {
     Tahmid obj;

     cout<<obj.solve()<<endl;
  }
    return 0;
}


