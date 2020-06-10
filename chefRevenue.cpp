#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,k,sum=0,sum2=0;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(arr[i]>k){
                arr[i]=k;
            }
             sum2+=arr[i];
        }
        cout<<sum-sum2<<endl;
    }
    return 0;
}