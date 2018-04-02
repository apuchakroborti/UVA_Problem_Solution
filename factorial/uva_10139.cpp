#include<bits/stdc++.h>
using namespace std;
bool isPosible(int n,int prime,int count1)
{
    int prime_val=prime;
    while(n/prime_val && count1 > 0)
    {
        count1=count1-n/prime_val;
        prime_val*=prime;
    }
    return count1 <= 0;

}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        bool isDivisor=true;
        int num=m;
        for(int i=2;i*i<=m && isDivisor ;i++)
        {
            int count1=0;
            while(num%i==0)
            {
                num=num/i;
                count1++;
            }
            isDivisor=isPosible(n,i,count1);

        }
        if(num>1 && isDivisor)
        {
            isDivisor=isPosible(n,num,1);
        }
        printf("%d %s %d!\n",m,isDivisor?"divides":"does not divide",n);
    }


    return 0;
}
/*verdict time limit
int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n>=m)
        {
            printf("%d divides %d!\n",m,n);
            continue;
        }
        unsigned long long mod_ans=1;
        mod_ans=mod_ans%m;
        for(int i=2;i<=n;i++)
        {
            mod_ans=(mod_ans*i)%m;
        }
        if(mod_ans==0)
        {
            printf("%d divides %d!\n",m,n);
        }
        else
        {
            printf("%d does not divide %d!\n",m,n);
        }
    }
*/
