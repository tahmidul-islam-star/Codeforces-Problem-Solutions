#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t;cin >> t;

    while (t--) {

    int n;cin >> n;

    int j=1;

    for(int i=1;i<=n;i++)
    {
    cout<<j<<" ";

    j+=2;
    }
    cout<<endl;
    }
    return 0;
}
