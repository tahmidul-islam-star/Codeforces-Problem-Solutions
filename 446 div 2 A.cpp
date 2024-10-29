#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<queue>
#include<cstdint>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define ll unsigned long long
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

void Tahmid()
{
   int n,random;cin>>n;

   priority_queue<int> pq;

   ll sum =0,cap=0;

   for(int i=0; i<n ; i++) {cin>>random ; sum += random;}

   for(int j=0 ;j<n ; j++) { cin>>random ; pq.push(random);}

   cap  = pq.top(); // maximum volume (cans capacity)

   pq.pop(); // pop out

   cap += pq.top(); // 2nd maximum volume (cans capacity)

   if(sum <= cap ) yes; // when all rem cola (sum) less than or equal 2 maximum volume( cans) capacity

   else no; // otherwise no
}
int32_t main()
{
    improve;

    ll t = 1;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}


