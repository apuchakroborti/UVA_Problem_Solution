#include<bits/stdc++.h>
using namespace std;
long long dp[30001][5];
int coin[]={1,5,10,25,50};
long long way(int x,int y)
{
    if(y>4)return 0;
    if(x==0)return 1;
    if(x<0)return 0;
    if(dp[x][y]!=-1)return dp[x][y];

    dp[x][y] = way(x,y+1) + way(x-coin[y],y);

    return dp[x][y];

}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    while(scanf("%d",&n)==1){

        long long ans=way(n,0);
        if(ans==1)
        {
            printf("There is only 1 way to produce %d cents change.\n",n);
        }
        else
        {
            printf("There are %lld ways to produce %d cents change.\n",ans,n);
        }

    }
    return 0;
}
