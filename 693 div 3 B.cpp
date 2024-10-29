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
          int n;cin>>n;

          int temp=n;

          int coun1=0;

          int random;

          while(n--){

           cin>>random;

            if(random==1) coun1++;
          }
          int coun2= temp- coun1;

           if(coun1%2 ==0 and coun2 %2==0) return "YES";

            else if(coun2 %2 !=0){

              if(coun1 %2 ==0 and coun1 >=2) return "YES";

              else return "NO";
          }
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
