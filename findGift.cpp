#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,positionX=0,positionY=0,count1=0,count2=1;
        int L=-1,R=1,U=1,D=-1;
        cin>>n;
        char c[n];
        for (int i = 0; i < n; i++)
        {
            cin>>c[i];
        }
        for (int i = 0; i < n; i++)
        {
            if((c[i]=='L' || c[i]=='R') && count1==0)
            {
                 if (c[i]=='L')
                 {
                     positionX+=L;
                 }
                 if (c[i]=='R')
                 {
                     positionX+=R;
                 }
                 count1=1;
                 count2=1;
            }
            if((c[i]=='U' || c[i]=='D') && count2==1)
            {
                 if (c[i]=='U')
                 {
                     positionY+=U;
                 }
                 if (c[i]=='D')
                 {
                     positionY+=D;
                 }
                 count1=0;
                 count2=0;
            }
        }
        cout<<positionX<<"  "<<positionY<<endl;
    }
    return 0;
}