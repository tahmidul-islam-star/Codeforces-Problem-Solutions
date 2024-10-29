#include<iostream>
#include<cmath>
#include<algorithm>
#include<set>

using namespace std;

#define loop for(int i=0;i<n;i++)
#define ll long long

void Tahmid()
{
    int n;cin>>n;char ch;

    set<char>p;

    loop{

       cin>>ch; p.insert(ch);
    }
    int s= p.size();

    cout<<s*2 + (n-s) <<endl;

}
int main()
{
    int t;cin>>t;

    while(t--){

        Tahmid();
    }

    return 0;
}

