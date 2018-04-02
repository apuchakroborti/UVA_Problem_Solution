#include<bits/stdc++.h>
using namespace std;
#define num_limit 5001
#define digit_limit 1050
int dp[num_limit][digit_limit];
int main()
{
    //freopen("uva_495_in.txt","r",stdin);
    //freopen("uva_495_out.txt","w",stdout);
    int n;
    dp[0][0]=0;
    dp[1][0]=1;
    dp[2][0]=1;
    for(int i=3;i<num_limit;i++)
    {
        for(int j=0;j<digit_limit;j++)
        {
            dp[i][j]+=dp[i-1][j]+dp[i-2][j];
            if(dp[i][j]>=10)
            {
                dp[i][j+1]=dp[i][j+1]+dp[i][j]/10;
                dp[i][j]=dp[i][j]%10;

            }
        }
    }
    while(scanf("%d",&n)==1)
    {

        printf("The Fibonacci number for %d is ",n);
        int i=digit_limit-1;
        for(;i>0;i--)
        {
            if(dp[n][i]!=0)break;
        }

        for(;i>=0;i--)
        {
            printf("%d",dp[n][i]);
        }
        printf("\n");

    }

    return 0;
}

