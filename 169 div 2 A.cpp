#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long


void Solve()
{
    int n,k;cin>>n>>k;

    vector<int>vect;

    int f,t;

    for(int i =0;i<n;i++)
    {
        cin>>f>>t;

        if(t>k){

            vect.push_back(f-t+k);
        }
        else{

            vect.push_back(f);
        }
    }
    cout<<*max_element(vect.begin(),vect.end())<<endl;
}
signed main()
{
    improve;

    int _= 1;

    while(_--)
    {
        Solve();
    }
    return 0;
}




