#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;

        int arra[n];

        for(int i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        sort(arra,arra+n);

        int ok=1;

        for(int i=0;i<n-1;i++)
        {
            if(arra[i]== arra[i+1] || arra[i]+1==arra[i+1]) {continue;}

            else{

                ok=0; break;
            }
        }
        if(ok==0) cout<<"NO"<<endl;

        else cout<<"YES"<<endl;

    }
    return 0;
}
