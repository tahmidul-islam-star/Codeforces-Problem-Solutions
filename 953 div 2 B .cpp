#include<iostream>
#include<cmath>

using namespace std;

#define ll unsigned long long
#define endl '\n'

ll fun(ll a){

    return (a*(a+1))/2;
}

void Tahmid()
{
    ll n, a, b;

    cin >> n >> a >> b;

    if (b <= a) {

        cout << n * a << endl;

    } else {

        ll diff, sum1;

        diff = b - a;

        sum1 = n * a;

        sum1 += fun(diff);

        if (diff > n) {

            sum1 -= fun(diff - n);
        }
        cout << sum1 << endl;
    }
}
signed main()
{
    ll t; cin >> t;

    while (t--) {

        Tahmid();
    }
    return 0;
}
