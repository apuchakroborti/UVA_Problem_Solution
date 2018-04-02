#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;

    	while(scanf("%d",&n)==1)
        {
            if(n<=0)break;
            int arr[n];
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            int res[n];
            memset(res,-1,sizeof(res));
            for(int i=1;i<n;i++){
                int dif=abs(arr[i-1]-arr[i]);
                if(dif>=1 && dif<n)res[dif]=1;
            }
            int flag=1;
            for(int i=1;i<n;i++){

                if(res[i]==-1){
                    printf("Not jolly\n");
                    flag=0;
                    break;
                }
            }
            if(flag){
                printf("Jolly\n");
            }

        }


    return 0;
}
