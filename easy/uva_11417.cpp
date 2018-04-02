#include<bits/stdc++.h>
using namespace std;
long long gcd(int a,int b)
{
    if(a%b==0)return b;
    return gcd(b,a%b);
}
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {

        long long int sum=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                sum+=gcd(i,j);
            }
        }
        printf("%lld\n",sum);

    }

    return 0;
}
