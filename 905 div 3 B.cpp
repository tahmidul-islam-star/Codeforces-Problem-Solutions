#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void Solve()
{
     int n,k;cin>>n>>k;

     string s,r;cin>>s;

     vector<int>freq(26,0);

     for(char c: s) freq[c - 'a']++;

     int coun =0;

     for(int i=0;i<26;i++)
     {
      if(freq[i] %2) coun++; //odd frequency count
     }
     // maximum odd frequency character in palindrome 1
     // so if after k times operation if remaining odd freq 0/1

     if(coun - k<=1){

        cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;

}
signed main()
{
    int t;cin>>t;

    while(t--)
    {
     Solve();
    }
    return 0;
}
