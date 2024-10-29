#include<iostream>
#include<algorithm>
#include<set>
#include<iomanip>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'

//Tahmid.....................................

void Tahmid()
{
    int a,b;cin>>a>>b;

    int coun=0;

    if(b%2==0){

        coun = b/2;
    }
    else{

        coun = b/2 +1;

    }
    //cout<<coun<<endl;

    int total =coun /2;

    int rem=0;

    int los= b *4;

    rem= coun*15 - los;

   //cout<<rem<<endl;


    if(a>rem){

        a -= rem;

        if(a%15==0){

            coun += a/15;
        }
        else{

            coun += a/15 +1;
        }
    }
    cout<<coun<<endl;

}
int main()
{
    improve;

    int t;cin>>t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}
