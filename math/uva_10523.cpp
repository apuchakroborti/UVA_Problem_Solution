#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,A;
    while(scanf("%d%d",&N,&A)==2)
    {
        unsigned long long  ans=0;
        for(int i=1;i<=N;i++)
        {
            ans+=i*pow(A,i);
        }
        cout<<ans<<endl;
    }

    return 0;
}
