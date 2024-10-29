#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

#define loop for(int i=0;i<n;i++)
#define ll long long

void Tahmid()
{
    int n;cin>>n; int arra[n];

   loop
    {
        cin>>arra[i];
    }
    sort(arra,arra+n);

    ll sum = abs(arra[n-1]-arra[0])+ abs(arra[n-1]-arra[1]) + abs(arra[n-2]-arra[0]) +abs(arra[n-2]-arra[1]);

    cout<<sum<<endl;

    free(arra);
}
int main()
{
    int t;cin>>t;

    while(t--){

        Tahmid();
    }

    return 0;
}
