#include<iostream>


using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n,k ; cin>>n>>k;

        int arra[n];

        for(int i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        int gold = 0;

        int ans =0;

        for(int i=0;i<n;i++)
        {
            if(arra[i]>= k){

                gold += arra[i];
            }
            if(arra[i] == 0 && gold >0){

                gold--; ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
