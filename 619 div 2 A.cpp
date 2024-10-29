#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t;cin>>t;

    cin.ignore();

    while(t--){

         string s1,s2,s3;

        cin>>s1>>s2>>s3;

        int ok= 1;

        for(int i=0;i<s1.size();i++){

                if(s3[i] == s1[i] || s3[i] == s2[i]) continue;

                else{

                ok= 0;

                break;
                }
        }
        if(!ok) cout<<"NO"<<endl;

        else cout<<"YES"<<endl;

    }
    return 0;
}
