#include<iostream>
using namespace std;
//#define T 100
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n,distance=0,count=0,count2=0,count3=0;
        cin>>n;
        int *arr;
        arr=new int[n];
        for (int i = 0; i < n && n>0; i++)
        {
            cin>>arr[i];
            if (arr[i]==1)
            {
             count3++;   
            }
            
        }
        if(count3>0){
        for (int i = 0; i < n;i++)
        {
           if(arr[i]==1)
           {
               for (int j = i+1; j < n; j++)
               {
                   distance++;
                   if(arr[j]==1)
                   {
                     i=j;
                     break; 
                   }
               }  
               if(distance<6)
               {
                 count++;
                 break;
               }
               else
                 distance=0;
           
           }     
        }
        for (int i = n-6; i < n && n>0; i++)
        {
            if(arr[i]==1)
            count2++;
        }
        
        if(count>0 && count2>1)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
        delete[] arr;
 }
    
}