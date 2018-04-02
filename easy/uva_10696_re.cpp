#include<bits/stdc++.h>
using namespace std;
int getRecursive91(long long int n);
int getRecursive91(long long int n)
{
        if(n<=100)return getRecursive91(getRecursive91(n+11));
        else return n-10;

}

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1){
        if(n==0)break;

        printf("f91(%lld) = %lld\n",n,getRecursive91(n));

    }
    return 0;
}
