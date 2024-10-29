#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define improve ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop  for(int i=0;i<n;i++)


void Tahmid() {

        int n; cin >> n; int arra[n];

        loop { cin >> arra[i]; }

        if (arra[0] == arra[n-1]) { no;return; }

         else { yes;

              loop {

                   if(i== n/2) cout<<"R";

                   else  cout<<"B";
               }
               cout<<endl;
    }
    //free(arra);
}

int main() {

    improve;

    int t;cin>>t;

    while(t--)
  {
     Tahmid();
  }
    return 0;
}
