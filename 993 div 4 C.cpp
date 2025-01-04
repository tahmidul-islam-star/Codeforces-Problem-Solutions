#include<iostream>

using namespace std;

signed main()
{
    int t;cin>>t;

    while(t--)
    {
     int m,a,b,c;cin>>m>>a>>b>>c;

     int total =0; int a_sit = m;int b_sit = m;

     if(a>=m) {total += m; a_sit=0;}

     else {total += a ; a_sit = m-a;}

      if(b>=m) {total += m; b_sit=0;}

     else {total += b ; b_sit = m-b;}

     int rem = a_sit + b_sit;

     if(c>= rem) total += rem;

     else total+= c;

     cout<<total<<endl;

    }
    return 0;
}


