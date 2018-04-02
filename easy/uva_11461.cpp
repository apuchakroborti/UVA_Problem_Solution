#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b) && a && b)
    {
        int ans=0;
        for(int i=a;i<=b;i++)
        {
            int n=sqrt(i);
            if(n*n==i)ans++;

        }
        printf("%d\n",ans);
    }

    return 0;
}
