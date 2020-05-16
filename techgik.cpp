#include<iostream>
using namespace std;
int main()
{
    int n,max=2320000;
    bool condition=true;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
       if((arr2[i]/arr1[i])<max)
       max=arr2[i]/arr1[i];   
    }
    
    // while (condition)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         arr2[i]-=arr1[i];
    //         if(arr2[i]<0)
    //         {
    //             condition=false;
    //             break;
    //         }
            
    //     }
    //     if(condition)
    //     max++;
    // }
    cout<<max<<endl;
}