#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while (testcase--)
    {
        long long int n;
        cin>>n;
        long long int teamRevG[n],teamOpo[n],max=0,count=-1,temp=0;
        for (int i = 0; i < n; i++)
        {
            cin>>teamRevG[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>teamOpo[i];
        }
        sort(teamRevG,teamRevG+n);
        sort(teamOpo,teamOpo+n);
        for (int i = 0; i <n ; i++)
        {
            count=-1;
            for (int j = 0; j < n; j++)
            {
                if(teamOpo[j]<=teamRevG[i] && teamOpo[j]>0 && teamRevG[i]>0)
                {
                    if(teamOpo[j]!=-1)
                    {
                        count=j;
                        continue;
                    }
                    else
                    continue;
                }
                
            }
            if(count!=-1)
            {
                teamOpo[count]=-1;
                 max++;
            }
        }
       cout<<max<<endl; 
    }
    
}