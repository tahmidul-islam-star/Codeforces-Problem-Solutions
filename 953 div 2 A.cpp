#include<iostream>
#include<algorithm>

using namespace std;

#define endl '\n'

class solve
{

public:

    void Tahmid()
    {
        int n,sum=0;cin>>n;

        int arra[n];

        for(int i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        /*Because he reads one book highest number in each file

        That means highest index (last) book he must read
        */
        sum += arra[n-1];

        /*now for maximum page->  have to find the maximum

        page number book from 0 index to n-1 index

        */
        sort(arra,arra+(n-1));

        sum += arra[n-2];

        /*only 2 book he read one is highest index

         other one is highest page number book;
        */
        cout<<sum<<endl;

    }
};
int main()
{
    int t;cin>>t;

    while(t--)
    {
        solve obj;

        obj.Tahmid();
    }
    return 0;
}
