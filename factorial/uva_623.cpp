#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int num[3005];
        num[0]=1;
        int m=1;
        int x=0;
        int carry=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<m;j++)
            {
                x=num[j]*i+carry;
                num[j]=x%10;
                carry=x/10;
            }
            while(carry>0)
            {
                num[m]=carry%10;
                carry=carry/10;
                m++;
            }

        }
        printf("%d!\n",n);
        for(int i=m-1;i>=0;i--)
        {
            printf("%d",num[i]);
        }
        printf("\n");
    }

    return 0;
}
