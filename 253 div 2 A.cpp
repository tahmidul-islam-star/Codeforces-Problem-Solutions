#include<iostream>
#include<cstring>
#include<set>

using namespace std;

int main()
{
    string s;

    getline(cin,s);

    set<char>p;

    for(int i=1;i<s.size()-1; i+=3)
    {
        p.insert(s[i]);
    }

    cout<<p.size()<<endl;

    return 0;
}
