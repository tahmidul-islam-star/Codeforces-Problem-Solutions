#include<iostream>

using namespace std;

void solve(int n,int m)
{
    int arra[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

    int ok =0;

    for(int i=0;i<14;i++){

        if(arra[i]==n && arra[i+1]==m) {ok =1;break;}
    }
    if(ok==1) cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}
int main()
{
    int n,m;cin>>n>>m;

    solve(n,m);

    return 0;
}
