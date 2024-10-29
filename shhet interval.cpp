#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define endl '\n'


// Alhamdulillah

int main()
{
    improve;

    ll a, b, c, d; cin >> a >> b >> c >> d;

    //sqrt(pow(a,b) = (a^b)^1/2 = a^b/2;

    // log(2 base)(a^b/2) = b/2 * log(2 base)(a)

    double log_1= (b/2.0)* log2(a);

    double log_2= (d/2.0)* log2(c);

    //if((sqrt(pow(a,b)))> (sqrt(pow(c,d)))) cout<<"YES"<<endl;

    if(log_1>log_2) cout<<"YES"<<endl;

    else cout<<"NO"<<endl;

    return 0;
}
