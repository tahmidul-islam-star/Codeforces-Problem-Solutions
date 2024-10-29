#include<iostream>
#include<cstring>
#include<algorithm>
#include<deque>
#include<set>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void Tahmid()
{
    int n;cin>>n;

    if(n%2 == 0) cout<<"-1"<<endl;

    else{

        deque<int>dq;

       dq.push_back(1);

      for(int i = 2 ;i<= n ;i++)
      {
          if(i%2 == 0) dq.push_back(i);

          else dq.push_front(i);
      }
      while(!dq.empty())
      {
          cout<<dq.front()<<" ";

          dq.pop_front();
      }
     cout<<endl;
    }
}
signed main()
{
    int _; cin>>_;

    while(_--)
    {
        Tahmid ();
    }
    return 0;
}


