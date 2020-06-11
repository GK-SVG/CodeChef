#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,chef5=0,chef10=0,chef15=0,count=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(arr[i]==5){
            chef5++;
            continue;
            }
            if(arr[i]==10){
                if(chef5>=1){
                    chef10++;
                    chef5--;
                    continue;
                }
                else{
                    count++;
                    break;
                }

            }
            if(arr[i]==15){
                if(chef5>=2 || chef10>=1){
                    if(chef10>=1){
                        chef15++;
                        chef10--;
                        continue;
                    }
                    else{
                        chef5-=2;
                        chef15++;
                        continue;
                    }
                }
                else{
                    count++;
                    break;
                }
            }
        }
        if (count==0)
        {
            /* code */
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }     
    }
    return 0;
}