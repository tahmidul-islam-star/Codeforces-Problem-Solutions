#include<iostream>
#include<vector>


using namespace std;

#define f1 for(int i=0;i<n;i++)
#define f2 for(int j=1;j<=n;j++)
#define endl '\n'

int Tahmid()
{
    int n;cin>>n;

    if(n==0) return 1;

    else{

    int rem= n%4;

     if(rem==0) return 6;

     else if(rem==1) return 8;

     else if(rem==2) return 4;

     else return 2;// rem=3;

    }
}
int main()
{
    int res=Tahmid();

    cout<<res<<endl;

    return 0;
}

