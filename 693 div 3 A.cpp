#include<iostream>
#include<cstring>

using namespace std;

#define endl '\n'

//Alhamdulillah

class Tahmid
{
  public:

      string solve()
      {
          int w,h,n;cin>>w>>h>>n;

         int coun=1;

        while(w %2 ==0)
        {
            w /=2;

            coun *= 2;
        }
        while(h %2 ==0)
        {
            h /=2;

            coun *= 2;
        }
        if(coun>= n) return "YES";

        else return "NO";

      }
};
int main()
{
    int t;cin>>t;

    while(t--)
    {
        Tahmid obj;

        string res= obj.solve();

        cout<<res<<endl;
    }
    return 0;
}

