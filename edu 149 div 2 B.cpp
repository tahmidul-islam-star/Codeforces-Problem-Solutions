#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

void Solve() {

    int n;cin >> n;

    string s;cin >> s;

    int ans = 1, coun = 1;

    for (int i = 1; i < n; i++) {

        if (s[i] == s[i - 1]) coun++;

        else coun = 1;

        ans = max(ans, coun+ 1);
    }
    cout << ans << "\n";
}
int main()
{
    int t ; cin>>t;

    while(t--)
    {
     Solve();
    }
    return 0;
}
// 400 number problem solution on Codeforces

