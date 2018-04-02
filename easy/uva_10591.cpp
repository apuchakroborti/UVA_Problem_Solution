#include<bits/stdc++.h>
using namespace std;
int getSingleNum(long long int n);
int getSingleNum(long long int n)
{
    set<long long int> list;
    list.insert(n);
    while(1)
    {
        long long int num=n;
        long long int sum=0;
        while(num!=0)
        {
            long long int d=num%10;
            sum+=d*d;
            num=num/10;
        }
        n=sum;
        if(n==1)return 1;
        else if(list.find(n)!=list.end())return 0;
        else list.insert(n);
    }

}

int main()
{

    int i=1;
    int t;
    cin>>t;
    while(t--){
            long long int n;
            scanf("%lld",&n);
            if(getSingleNum(n)==1)
            {
                printf("Case #%d: %lld is a Happy number.\n",i,n);

            }
            else
            {
                printf("Case #%d: %lld is an Unhappy number.\n",i,n);
            }
            i++;

    }
    return 0;
}
