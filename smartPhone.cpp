#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int n,max,arr[1000000];
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    sort(arr,arr+n);
    max=arr[n-1];
    for (int i = n-2; i >=0; i--)
    {
        /* code */
        ;
        if(((n-i)*arr[i])>max)
        max=(n-i)*arr[i];
    }
    cout<<max<<endl;
    return 0;
}