#include <iostream>
#include <vector>
#include <algorithm>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

void Tahmid() {

   int n; cin>>n;

   string s;cin>>s;

   set<char> myset (s.begin(),s.end());

   vector<char>vect(myset.begin(),myset.end()); // store distinct character means R string

   int sz = vect.size();

    for(int i=0; i<n;i++) // for every character main string
    {
        for(int j = 0 ;j<sz;j++)
        {
            if(s[i] ==  vect [j]) { /* if the character matches the one in the distinct vector
                                              **for example **
                                        if a character (from main string S) found at 0th index in R string
                                         then in main string s[i] will replace as follows from R string vect[n-1] th character
                                         */

            s[i] = vect[sz -1 - j]; // swap as follows R string

            break; // break inner loop

            }
        }
    }
    cout<<s<<endl;
}
int main() {

    improve;

    int _; cin>>_;

    while(_--){

    Tahmid();

    }
    return 0;
}

