#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;

#define f1 for(int i=0;i<n;i++)
#define f2 for(int j=0;j<=i;j++)
#define endl '\n'
#define int long long

void Tahmid()
{
    int n;cin>>n;

    int arra[n];

    f1{ cin>>arra[i]; }

    int coun=0,prevsum=0;

   priority_queue<int>pq;

    f1{

        prevsum += arra[i];

        pq.push(arra[i]);

            // sub array is count if arra[j]= sum of all other;

            // arra[j] = prevsum - arra[j]

            // 2*arra[j]= prevsum -> rewrite

            if(pq.top()*2 == prevsum){

                coun ++;

            }
        }
    cout<<coun<<endl;
}
signed main()
{
    int t;cin>>t;

    while(t--)
    {
       Tahmid();
    }
    return 0;
}


