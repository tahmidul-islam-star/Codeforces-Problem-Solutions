#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void Solve() {

    int n,k;cin >> n>>k;

    if(n==1) cout<<1<<endl<<1<<endl;

    else if(n==k or k==1) cout<<-1<<endl;

    else if((k-1)%2) cout<<3<<endl<<1<<endl<<k<<endl<<k+1<<endl;

    else cout<<3<<endl<<1<<endl<<k-1<<endl<<k+2<<endl;
}
signed main() {

    improve;

    int t;cin >> t;

    while (t--) {

        Solve();
    }
    return 0;
}

