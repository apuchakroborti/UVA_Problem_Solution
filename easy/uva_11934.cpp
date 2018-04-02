#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int f(int x)
{
    int sum=a*x*x+b*x+c;
    return sum;
}
int main()
{
    int d,L;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&L)==5){
        if(a==0 && b==0 && c==0 && d==0 && L==0)break;

        int count1=0;
        for(int i=0;i<=L;i++)
        {
            if(f(i)%d==0)count1++;
        }

        printf("%d\n",count1);

    }
    return 0;
}
