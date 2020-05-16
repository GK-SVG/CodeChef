#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       long long int n,profit=0,year=0;
        cin>>n;
       long long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (long long int i = n-1; i >=0 ; i--)
        {
            
            if(arr[i]-year<=0)
            {
              break;
            }
            else
            profit+=(arr[i]-year);
            year++;
            //cout<<" "<<profit<<" "<<year;
        }
        cout<<profit<<endl;
    }
    
}