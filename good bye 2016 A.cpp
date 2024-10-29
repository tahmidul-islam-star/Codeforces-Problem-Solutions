#include<iostream>

using namespace std;

int main()
{
    int n,k;cin>>n>>k;

    int rem= 4*60;

    int baki= rem- k;

    int coun=0;

    long long sum=0;

    for(int i=5 ;i<=baki;  i += 5){

    sum += i;

    if(sum> baki){break;}

    coun++;

     if(coun== n){break;}

    }
    cout<<coun<<endl;

    return 0;
}
