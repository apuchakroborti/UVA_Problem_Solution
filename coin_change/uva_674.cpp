#include<bits/stdc++.h>
using namespace std;
long long dp[30001][5];
int coin[]={1,5,10,25,50};
long long way(int target,int coin_pos)
{
    if(coin_pos>4)return 0;
    if(target==0)return 1;
    if(target<0)return 0;
    if(dp[target][coin_pos]!=-1)return dp[target][coin_pos];

    dp[target][coin_pos]=way(target,coin_pos+1)+way(target-coin[coin_pos],coin_pos);
    return dp[target][coin_pos];


}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    while(scanf("%d",&n)==1){

        long long ans=way(n,0);
        cout<<ans<<endl;


    }
    return 0;
}
