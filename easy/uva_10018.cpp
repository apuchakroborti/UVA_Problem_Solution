#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s;
        scanf("%lld",&n);
        int count1=0;
        while(1)
        {
            long long int sum=0;
            long long int num=n;
            while(num!=0)
            {
                sum=sum*10+num%10;
                num=num/10;
            }
            if(n==sum)break;
            n=sum+n;
            count1++;

        }
        printf("%d %lld\n",count1,n);
    }

    return 0;
}
