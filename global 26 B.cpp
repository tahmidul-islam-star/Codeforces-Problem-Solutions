#include<iostream>
#include<algorithm>


using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz s.size()
#define f1 for(int i=1;i<sz-1;i++)
#define int long long

//Try to use OOP concept

class Tahmid{

 public:

    string inline solve()
     {
        string s;cin>>s;

        int ok = 1;

        if( s[sz-1]== '9' or s[0] !='1') { ok=0;return "NO";}

     f1{
          if(s[i]=='0'){ ok =0; return "NO"; break;}
        }
          if(ok==1) return "YES";
     }
};
signed main()
{
    improve;

    int t;cin>>t;

    while(t--)
    {
        Tahmid obj;

        cout<<obj.solve()<<endl;
    }
    return 0;
}
