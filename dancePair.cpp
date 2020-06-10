#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        string str;
        int count=0;
        cin>>str;
        for (int i = 0; i < str.length()-1; i++)
        {
            /* code */
            if(str.at(i)!=str.at(i+1)){
               count++;
               i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}