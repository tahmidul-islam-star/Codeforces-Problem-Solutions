#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

//Try to use OOP concept

class Tahmid
{
  public:

    string solve(){

         int n;cin>>n;

         string s;cin>>s;

         string  s1= s;

         reverse(s.begin(),s.end());

         string s2= s;

         s2 += s1;

        if(s2>s1) return s1;

        else return s2;
    }

};
int main()
{
    int t;cin>>t;

    while(t--){

        Tahmid obj;

        string temp = obj.solve();

        cout<<temp<<endl;
    }

    return 0;
}

