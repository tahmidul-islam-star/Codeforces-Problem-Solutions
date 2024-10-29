#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

#define f1 for(int i=0;i<a;i++)
#define f2 for(int j=0;j<b;j++)
#define endl '\n'
#define int long long

void Tahmid()
{
    int a, b; cin >> a >> b;

    vector<string> vect(a);

    vector<int> row(a, 0), col(b, 0);

   f1
    {
        cin >> vect[i];

     f2
        {
            if (vect[i][j] == '#')
            {
                row[i]++;

                col[j]++;
            }
        }
    }
    int coun1 = 0, index1 = 0,coun2 = 0, index2 = 0;

    f1
    {
        if (row[i] > coun1)
        {
            coun1 = row[i];

            index1 = i;
        }
    }

   f2
    {
        if (col[j] > coun2)
        {
            coun2 = col[j];

            index2 = j;
        }
    }

    cout << index1+1<< " " << index2+1 << endl;
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



