#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;

        string s= to_string(n);

        int len= s.size();

        int k= n%10;

        k -=1;

        int ans=0;

        ans = k*10;

        if(len==4) ans += 10;

        else if(len==3) ans += 6;

        else if(len== 2) ans +=3;

        else ans +=1;

        cout<<ans<<endl;
    }
    return 0;
}
