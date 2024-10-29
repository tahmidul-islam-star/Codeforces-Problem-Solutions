#include<iostream>
#include<cstring>
#include<algorithm>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long


void Solve()
{
    int n;cin>>n;

    int arra[n];

    int maxi = INT_MIN, mini = INT_MAX;

    for(int i = 0; i<n ;i++)
    {
        cin>>arra[i];

        maxi = max(maxi,arra[i]);

        mini = min(mini,arra[i]);
    }
    bool p = 0;

    if(maxi == arra[0] && mini == arra[n-1])
    {
        p =1;

        swap(arra[0],arra[n-1]);
    }

    int coun = 0, p1 = -1 ,p2 = -1;

    bool ok = 1;

    for(int i = 0; i<n-1;i++)
    {
        if(arra[i]>arra[i+1]){

            coun++;

            p1 = i+1, p2 = i+2;
        }
    }
    if(p ==1 && coun == 0)
    {
        cout<<"yes"<<endl<<1<<" "<<n<<endl;
    }
    else if(p== 0 && coun ==0 )
    {
        cout<<"Yes"<<endl;

        cout<<1<<" "<<1<<endl;
    }
   else if(p== 0 && coun ==1)
   {
       cout<<"yes"<<endl<<p1<<" "<<p2<<endl;
   }
   else cout<<"no"<<endl;
}
signed main()
{
    improve;

    int _ =1;

    while(_--)
    {
        Solve();
    }
    return 0;
}



