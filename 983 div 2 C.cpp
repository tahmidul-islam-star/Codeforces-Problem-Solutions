#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

#define endl '\n'
#define improve ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void Solve() {

  int n;cin>>n;

  int arra[n];

  for(int i=0;i<n;i++)
  {
    cin>>arra[i];
  }
  sort(arra,arra+n);

  int mini = n;

  for(int i=0;i<n-1;i++)
  {
   int left = i+1,right = n-1,pos = i+1;

   while(left<=right)
   {
    int mid =(left+right)/2;

    if(arra[i]+arra[i+1]>arra[mid]){

    pos = mid,left = mid+1;
   }
   else right= mid-1;
  }
  mini = min(mini,n-(pos-i+1));//subarra length
  }
  cout<<mini<<endl;
}
signed main() {

    improve;

    int t;cin >> t;

    while (t--) {

        Solve();
    }
    return 0;
}


