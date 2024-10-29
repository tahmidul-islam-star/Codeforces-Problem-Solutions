#include<iostream>

using namespace std;

class Tahmid
{
public:

    string s;

    Tahmid() { cin>>s;} //constructor call for input

    ~Tahmid() { s.clear(); } //Destructor call for removing previous object

    string Check(){

    int n= s.size();

    if(n<= 2) return "NO"; // if number have only 2 digit

     if(s[0]== '1' && s[1] == '0') // number should be 10 (first 2 digit)
     {
         string x = "";

         for(int i=2 ;i<n;i++)
         {
             x += s[i]; // here make 2nd string (power) -> X
         }
         if(x == "1" || x[0] == '0') return "NO"; // if x is only 1 or x is starting with 0

         else return "YES";
     }
     return "NO";
    }
};
int main()
{
    int t;cin>>t;

    while(t--)
    {
        Tahmid obj;

        cout<<obj.Check()<<endl;
    }
    return 0;
}
