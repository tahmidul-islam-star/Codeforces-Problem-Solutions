#include<iostream>
#include<cstring>
#include<algorithm>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long

// Rectangle 2 diagonal intersect check

void Solve()
{
    double x11, y11, x12, y12;

    double x21, y21, x22, y22;

    cin >> x11 >> y11 >> x12 >> y12 >> x21 >> y21 >> x22 >> y22;

    double x_min1 = min(x11, x12), x_max1 = max(x11, x12);

    double y_min1 = min(y11, y12), y_max1 = max(y11, y12);


    double x_min2 = min(x21, x22), x_max2 = max(x21, x22);

    double y_min2 = min(y21, y22), y_max2 = max(y21, y22);

    if (x_max1 < x_min2 || x_max2 < x_min1 || y_max1 < y_min2 || y_max2 < y_min1) {

    cout << "NO" << endl;  // No intersection

    } else {

    cout << "YES" << endl;  // They intersect
    }
}
signed main()
{
    int _ =1;

    while(_--)
    {
        Solve();
    }
    return 0;
}

