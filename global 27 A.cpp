#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long

// O my god finally test case solve

void Solve()
{
       ll n,m,r,c;cin>>n>>m>>r>>c;

       ll temp = m-c; // kon colum e ase ok

       ll rem = n-r; // koita row baki ase

       ll coun = rem*m; // 1 ,1 kore koto gor agabe

       ll coun1 = rem*(m-1); // jegula corner e oigula m-1* joto row

       cout<<temp+coun+coun1<<endl;

}
signed main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Solve();
    }
    return 0;
}






