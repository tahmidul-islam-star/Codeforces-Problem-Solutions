#include <iostream>
#include <algorithm>

using namespace std;

#define lp1 for(int i=0;i<n;i++)
#define lp2 for(int j=0;j<m;j++)
#define endl '\n'

int main() {

    int t; cin >> t;

    while (t--) {

        int n, m; cin >> n >> m;

        int arra[n][m];

        lp1 { lp2 { cin >> arra[i][j]; } }

        lp1 {

            lp2 {

                int left = (j > 0) ? arra[i][j - 1] : 0;

                int top = (i > 0) ? arra[i - 1][j] : 0;

                int right = (j < m - 1) ? arra[i][j + 1] : 0;

                int bottom = (i < n - 1) ? arra[i + 1][j] : 0;

                int maxi1 = max(left, top);

                int maxi2 = max(right, bottom);

                int Max = max(maxi1, maxi2);

                cout << min(Max, arra[i][j]) << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
