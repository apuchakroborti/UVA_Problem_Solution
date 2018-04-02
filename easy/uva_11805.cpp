#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=1;
    while(t--)
    {
        int n,k,p;
        scanf("%d%d%d",&n,&k,&p);
        int res=(k+p)%n;
        printf("Case %d: %d\n",c,res==0?n:res);
        c++;
    }

    return 0;
}
