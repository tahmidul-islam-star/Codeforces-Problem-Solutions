#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>

using namespace std;
#define endl '\n'
#define ll long long
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Tahmid()
{
    int n;cin>>n;

    int arra[n];

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    string temp = "abcdefghijklmnopqrstuvwxyz";

    map<char,int>mymap;

   for(int i=0;i<26;i++)
   {
       mymap[temp[i]] =0;
   }
   for(int i=0;i<n;i++)
   {
       for(auto it: mymap)
       {
           if(it.second == arra[i])
           {
               cout<<it.first;

               mymap[it.first]++;

               break;
           }
       }
   }
    cout<<endl;
}
int main()
{
    improve;

    int _;cin>>_;

    while(_--)
    {
        Tahmid();
    }
    return 0;
}

