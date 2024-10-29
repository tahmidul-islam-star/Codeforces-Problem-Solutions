 #include <iostream>
#include <algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)


//Alhamdulillah success

// use math

void Solve() {

   int n; cin >> n;

    int coun = n/11;

    if(n<10) cout<<n<<endl;

    else{

    cout<<coun+9<<endl;
    }
}
signed main() {

    improve;

    int _; cin >> _;

    while (_--) {

        Solve();
    }
    return 0;
}
