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

    int n,s,m; cin>>n>>s>>m;

    int prev = 0,l,r;

    bool ok = 0;

    for(int i = 0; i<n ;i++)
    {
        cin>>l>>r;

        if(prev + s <= l){ ok = 1;} // if requiring time for shower (s) and previous point summation <= current left point
                                                   // that mean's possible

        prev = r; // here update previous to right for checking next interval
    }
    if(prev + s <= m) {yes; return;} // here check last point to end(m)

    if(ok) {yes; return;}

    no;
}
int main() {

    improve;

    int _ ; cin>>_;

    while(_--)
  {
     Tahmid();
  }
    return 0;
}


