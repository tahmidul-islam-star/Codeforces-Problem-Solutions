#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

void Result(int boy[],int girl[],int n,int m)
{
    int coun =0;

    int i = 0, j = 0;

    while(i<n && j<m)
    {
        if(abs(boy[i]-girl[j]) <= 1){ // 0 or 1

            coun ++, i++,j++;
        }
        else if(boy[i]>girl[j])
        {
            j++;
        }
        else {

            i++;
        }
    }
    cout<<coun<<endl;
}
void Solve()
{
    int n,m;

    cin>>n;   int boy[n];

    for(int i = 0; i<n ;i++)
    {
        cin>>boy[i];
    }
    cin>>m; int girl[m];

     for(int i = 0; i<m ;i++)
    {
        cin>>girl[i];
    }
    sort(boy,boy+n);

    sort(girl,girl+m);

    Result(boy,girl,n,m);
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

