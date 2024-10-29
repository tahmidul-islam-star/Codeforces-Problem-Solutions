#include<iostream>

using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;

        string s;cin>>s;

        bool ok = true;

        for(int i=0;i<n-1;i++)
        {
            if(s[i] !=s[i+1]){

            for(int j= i+2; j<n;j++){

                if(s[i]== s[j]){

                ok = false;

                break;

              }}}}

        if(!ok) cout<<"NO"<<endl;

        else cout<<"YES"<<endl;
    }
    return 0;
}
