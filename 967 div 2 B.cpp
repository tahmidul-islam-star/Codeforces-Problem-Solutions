#include<iostream>
#include<cstring>
#include<algorithm>
#include<deque>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Tahmid()
{
    int n;cin>>n;

    if(n%2 == 0) cout<<"-1"<<endl;

    else{

        for(int i = n ;i>= 1; i-= 2) cout<<i<<" ";

        for(int i = n-1;i>=2 ; i-= 2) cout<<i<<" ";

        cout<<endl;
    }
}
signed main()
{
    int _; cin>>_;

    while(_--)
    {
        Tahmid ();
    }
    return 0;
}

