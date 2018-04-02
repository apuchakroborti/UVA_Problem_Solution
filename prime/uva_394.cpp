#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int> > prime(100001);
    vector<bool> isprime(20000000,true);
    int pos=1;
    int prev=0;
    for(long long i=3;pos<=100000;i=i+2)
    {
        if(isprime[i]==true)
        {
            for(long long j=i*i;j<=20000000;j=j+i)
            {
                isprime[j]=false;
            }
            if(i==(prev+2))
            {
                prime[pos].first=prev;
                prime[pos].second=i;
                ++pos;
            }
            prev=i;
        }
    }
    int num;
    while(scanf("%d",&num)==1)
    {
        printf("(%d, %d)\n",prime[num].first,prime[num].second);
    }

    return 0;
}
