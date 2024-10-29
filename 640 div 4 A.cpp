#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;  cin >> t;

    while (t--) {

        int n;  cin >> n;

        vector<int> vect;

        int place = 1;

        while (n > 0) {

            int digit = n % 10;

            if (digit != 0) {

                vect.push_back(digit * place);
            }
            n /= 10;

            place *= 10;
        }
        cout << vect.size() << endl;

        for (auto i : vect) {

            cout << i<< " ";
        }
        cout << endl;
    }

    return 0;
}
