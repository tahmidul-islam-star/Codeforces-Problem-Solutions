#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<vector>
#include<set>
#include<map>

using namespace std;

#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

class Tahmid
{
 public:

     void solve()
     {
     string s; getline(cin, s);

     vector<int> numbers;

    int current_number = 0;

    char sign = '+';

    for (int i = 0; i < s.size(); i++) {

        if (isdigit(s[i])) {

            current_number = current_number * 10 + (s[i] - '0');

        } else if (s[i] == '+' || s[i] == '-') {

            if (sign == '+') {

                numbers.push_back(current_number);

            } else if (sign == '-') {

                numbers.push_back(-current_number);
            }
            sign = s[i];

            current_number = 0;

        } else if (s[i] == '=') {

           // last number before = sign

            if (sign == '+') {

                numbers.push_back(current_number);

            } else if (sign == '-') {

                numbers.push_back(-current_number);
            }
            break;
        }
    }
    int sum = 0;

    for (int num : numbers) {

        sum += num;
    }
     cout<<s<< " "<<sum<<endl;
     }
};
int main()
{
    improve;

    int _ = 1;

    while(_--)
    {
        Tahmid obj;

        obj.solve();
    }
    return 0;
}


