#include<iostream>
#include<set>

using namespace std;

void Tahmid()
{
    int n,ran;cin>>n;

    set<int>p;

    for(int i= 0;i<n;i++)
    {
        cin>>ran;

        p.insert(ran);
    }
    if(p.size()== n) puts("YES");

    else puts("NO");

}
int main()
{
    int t;cin>>t;

    while(t--)
    {
        Tahmid();
    }

    return 0;
}
