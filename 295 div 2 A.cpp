#include<iostream>
#include<cstring>
#include<algorithm>
#include<set>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define int long long

// Alhamdulillah

signed main()
{
    improve;

    int n;cin>>n;

    string s;cin>>s;

    transform(s.begin(),s.end(),s.begin(),::tolower);

    set<char>p;

    for(auto c: s){

        p.insert(c);
    }

    if(p.size()==26) puts("YES");

    else puts("NO");

    return 0;
}
