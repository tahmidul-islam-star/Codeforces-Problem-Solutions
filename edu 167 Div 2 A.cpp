#include<iostream>

using namespace std;

class Solve
{
  public:

    string solve()
    {
        int x,y; cin>>x>>y;

        if(y<= -2) return "NO";

        else return "YES";
    }
};
int main()
{
    int t;cin>>t;

    while(t--)
    {
        Solve obj;

        string res=obj.solve();

        cout<<res<<endl;
    }
    return 0;
}
