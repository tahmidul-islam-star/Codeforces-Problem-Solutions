#include<iostream>
#include<vector>
#include<cstdint>

using namespace std;

#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define ll unsigned long long
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

void Tahmid()
{
    char arra[11][11];

    int res = 0;

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            cin >> arra[i][j];

            if(arra[i][j] == 'X')
            {
                if(i == 1 || i == 10 || j == 1 || j == 10)
                    res++;
                else if(i == 2 || i == 9 || j == 2 || j == 9)
                    res += 2;
                else if(i == 3 || i == 8 || j == 3 || j == 8)
                    res += 3;
                else if(i == 4 || i == 7 || j == 4 || j == 7)
                    res += 4;
                else
                    res += 5;
            }
        }
    }

    cout << res << endl;
}

int32_t main()
{
    //improve;

    ll t;
    cin >> t;

    while(t--)
    {
        Tahmid();
    }
    return 0;
}
