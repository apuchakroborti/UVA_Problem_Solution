#include<bits/stdc++.h>
using namespace std;
#define max_val 1000005
int prime[max_val];
int main()
{
    //memset(prime,1,sizeof(prime));
    for(int i=0;i<max_val;i++)
    {
        prime[i]=1;
    }
    prime[0]=-1;
    prime[1]=-1;
    for(int i=2;i*i<max_val;i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*2;j<max_val;j=j+i)
            {
                prime[j]=-1;
            }
        }
    }

    int n;
    while(scanf("%d",&n) && n)
    {
        int p=0;
        int a=0;
        int b=0;
        for(int i=2;i<max_val;i++)
        {
            if(prime[i]==1 && prime[n-i]==1)
            {
                p++;
                a=i;
                b=n-i;
                break;
            }
        }
        if(p==0)
        {
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
        else
        {
            cout<<n<<" = "<<a<<" + "<<b<<endl;
        }


    }

    return 0;
}
