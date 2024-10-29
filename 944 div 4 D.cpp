#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

#define endl '\n'

class Tahmid
{
public:

    int solve()
    {
        string s;cin>>s;

        int coun=0;

        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]) continue;

            coun++;
        }
        if(s[0] != '0' && coun ==1) coun +=1;

        //if count is zero ,count=1;

        return (max(1,coun));
    }
};
int main()
{
    int t;cin>>t;

    while(t--)
    {
        Tahmid obj;

        int res= obj.solve();

        cout<<res<<endl;
    }
    return 0;
}
