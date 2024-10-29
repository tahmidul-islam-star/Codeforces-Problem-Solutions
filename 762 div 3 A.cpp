#include<iostream>
#include<cstring>

using namespace std;


void check(string s)
{
    if(s.size()%2 !=0) cout<<"NO"<<endl;

    else
    {
        int temp = s.size()/2;

        int flag=1;

        for(int i=0;i<temp;i++)
        {
            if(s[i] !=s[i+temp]){

                flag=0;

                break;
            }
            else{

                continue;
            }
        }
        if(flag==1) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }
}
int main()
{
    int t;cin>>t;

    cin.ignore();

    while(t--)
    {

    string s;cin>>s;

    check(s);

    }
    return 0;
}
