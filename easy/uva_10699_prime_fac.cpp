#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1){
        if(n==0)break;
        long long int num=n;
        set<long long int> list;
        while(n%2==0)
        {
            n=n/2;
            list.insert(2);
        }
        for(int i=3;i<=sqrt(n);i=i+2)
        {
            while(n%i==0)
            {
                n=n/i;
                list.insert(i);
            }

        }
        if(n>2)list.insert(n);

        printf("%lld : %d\n",num,list.size());

    }
    return 0;
}
