#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) && n)
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
        int fre[10];
        for(int i=0;i<10;i++)fre[i]=0;
        //printf("%d!\n",n);
        for(int i=m-1;i>=0;i--)
        {
            fre[num[i]]++;
            //printf("%d",num[i]);
        }
        printf("%d! --\n",n);
        for(int i=0;i<5;i++)
        {
            if(i)printf("    ");
            else printf("   ");
            printf("(%d)%5d",i,fre[i]);
        }
        cout<<endl;
        for(int i=5;i<10;i++)
        {
            if(i!=5)printf("    ");
            else printf("   ");
            printf("(%d)%5d",i,fre[i]);
        }
        cout<<endl;


    }

    return 0;
}
