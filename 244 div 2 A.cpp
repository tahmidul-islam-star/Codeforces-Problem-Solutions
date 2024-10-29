#include<iostream>


using namespace std;


//Alhamdulillah

int main()
{
    int n;cin>>n;

    int arra[n];

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    int coun1=0,coun2=0,coun3=0;

    for(int i=0;i<n;i++)
    {
        if(arra[i]>=1) coun1 += arra[i];

        else {

            coun2 ++;

            while(coun1 !=0 && coun2 !=0){

                coun1--;

                coun2--;
               }
                    coun3 += coun2;

                    coun2=0;
            }
    }
    cout<<coun3<<endl;

    return 0;
}
