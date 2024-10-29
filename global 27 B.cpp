#include <iostream>
#include <cstring>

using namespace std;

string findSmallest(int n) {

    if (n == 1 || n == 3) return "-1";

    if(n%2) return string(n-4,'3')+"6366";

    else return string(n-2,'3')+"66";
}
int main() {

    int t;cin >> t;

    while (t--) {

        int n;cin >> n;

        cout << findSmallest(n) << endl;
    }
    return 0;
}
