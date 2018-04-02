#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1){
        long long int odd=(n*(n+2))/2;
        long long int res=3*odd-6;
        printf("%lld\n",res);

    }
    return 0;
}
