#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Solve()
{
     int n,k; cin>>n>>k;

        vector<int>freq(n+1,0);

        for(int i=0;i<n;i++)
        {
            int x; cin>>x;

            freq[x]++;
        }
        int coun=0;

        for(int i=0;i<k;i++)
        {
            if(freq[i]==0)
            {
                coun++; //count missing number
            }
        }
        cout<<max(coun,freq[k])<<endl;
    }
int main()
{
    int t ; cin>>t;

    while(t--)
    {
     Solve();
    }
    return 0;
}

