#include<iostream>

using namespace std;

signed main()
{
    int t;cin>>t;

    while(t--)
    {
      string s;cin>>s;

      for(int i=s.size()-1;i>=0;i--)
      {
          if(s[i]=='q') cout<<"p";

          else if(s[i]=='p') cout<<"q";

          else cout<<"w";
      }
      cout<<endl;
    }
    return 0;
}

