#include<bits/stdc++.h>
using namespace std;

int main()
{
    char num[5000];
    while(scanf("%s",num)==1)
    {

        //int l1=strlen(num1);
        //int l2=strlen(num2);
        int l1=0;
        while(num[l1]!='\0')l1++;
        if(l1==1 && num[0]=='0')break;
        int mod=17;
        int sum=0;
        for(int i=0;i<l1;i++)
        {
            sum=sum*10+num[i]-'0';
            sum=sum%mod;
        }
        if(sum==0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }

    }

    return 0;
}
