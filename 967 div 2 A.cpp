#include<iostream>
#include<cstring>
#include<algorithm>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

class Tahmid
{
public:

     int Result()
    {
        int n; cin>>n;

        int arra[n+1] = {0}; // used to count occurrences

        for(int i=0;i<n;i++)
        {
            int random;cin>>random;

            arra[random]++;
        }
        sort(arra,arra+n+1);

        return n- arra[n]; //arra[n] holds the largest frequency

        //difference between the total number of elements (n) and the frequency of the most common element.
    }
};
signed main()
{
    int _; cin>>_;

    while(_--)
    {
        Tahmid obj;

         cout<<obj.Result()<<endl;
    }
    return 0;
}
