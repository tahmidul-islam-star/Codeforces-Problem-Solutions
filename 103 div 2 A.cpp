#include<iostream>

using namespace std;


int main()
{
    int n;cin>>n;

    int arra[n];

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }

    int coun =0;

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arra[j]<arra[j+1])
            {
                coun++;

                swap(arra[j],arra[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arra[i]<<" ";
    }
    cout<<endl;

    cout<<coun<<endl;
}
