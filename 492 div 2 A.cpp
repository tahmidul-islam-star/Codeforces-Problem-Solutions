#include<iostream>

using namespace std;

int main()
{
    int d;cin>>d;

    int coun=0,coun1=0,coun2=0,coun3=0,coun4=0,coun5=0;

    if(d>=100){

    coun1 = d/100;

    d -= coun1*100;

    }
   if(d>=20){

    coun2 = d/20;

    d -= coun2*20;

   }
   if(d>=10){

    coun3 = d/10;

    d -= coun3*10;
   }
   if(d>=5){

    coun4 = d/5;

    d -= coun4*5;

   }
    coun5= d;

    coun= coun1+coun2+coun3+coun4+coun5;

    cout<<coun<<endl;

    return 0;
}
