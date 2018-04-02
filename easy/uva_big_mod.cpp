#include<bits/stdc++.h>
using namespace std;
long long int getMod(long long int B,long long int P,long long int M){
    if(P==0)return 1;
    long long int temp=(getMod(B,P/2,M)%M);
    if(P%2==0) return (((temp%M)*(temp%M))%M);
    else return (((B%M)*(temp%M)*(temp%M))%M);

}
int main()
{
        long long int B,P,M;


    	while(scanf("%lld%lld%lld",&B,&P,&M)==3)
        {
            printf("%lld\n",getMod(B,P,M));
        }


    return 0;
}
