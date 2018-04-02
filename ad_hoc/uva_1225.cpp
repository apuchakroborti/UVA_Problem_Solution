#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res[10];
        memset(res,0,sizeof(res));
        for(int i=1;i<=n;i++)
        {
            int num=i;
            while(num!=0)
            {
                res[num%10]++;
                num=num/10;
            }
        }
        for(int i=0;i<10-1;i++)
        {
            printf("%d ",res[i]);
        }
        printf("%d\n",res[9]);


    }

    return 0;
}
