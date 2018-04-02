#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n) && n)
    {

        while(n>=10)
        {
            long long int sum=0;
            long long int num=n;
            while(num!=0)
            {
                sum+=num%10;
                num=num/10;
            }
            n=sum;
        }
        printf("%lld\n",n);

    }

    return 0;
}
