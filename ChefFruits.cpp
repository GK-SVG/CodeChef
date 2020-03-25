#include<iostream>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while (testcase--)
    {
        int N,M,sum=0,min=INT8_MAX;
        cin>>N>>M;
        int Fruits[N],Price[N];
        for(int i=0;i<N;i++)
        cin>>Fruits[i];
        for(int i=0;i<N;i++)
        cin>>Price[i];
        for (int i = 0; i < N; i++)
        {
            sum=0;
            if(Fruits[i]<=M)
            {
            for (int j = i; j < N; j++)
            {
               if(Price[j]==0)
                break;
               if (Fruits[i]==Fruits[j])
               {
                   sum+=Price[j];
                   Price[j]=0;
               }
                
            }
            if(sum<min && sum!=0)
            min=sum;
        }
        }
        cout<<min<<endl;

    }
    
}