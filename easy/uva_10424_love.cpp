#include<bits/stdc++.h>
using namespace std;
int getSingleNum(int cost1);
int getAdd(string name1);
int getSingleNum(int cost1)
{
    while(cost1>=10)
    {
        int sum1=cost1;
        int sum=0;
        while(sum1!=0)
        {
            sum+=sum1%10;
            sum1=sum1/10;
        }
        cost1=sum;
    }
    return cost1;
}
int getAdd(char name1[30],int n)
{
    int cost1=0;
    for(int i=0;i<n;i++)
    {
        if(name1[i]>='a' && name1[i]<='z')
        {
            cost1+=name1[i]-'a'+1;
        }
        else if(name1[i]>='A' && name1[i]<='Z')
        {
            cost1+=name1[i]-'A'+1;
        }
    }
    return cost1;

}

int main()
{

    char name1[30],name2[30];
    while(gets(name1)){
            gets(name2);
            int l1=strlen(name1);
            int l2=strlen(name2);
            int cost1=getAdd(name1,l1);
            cost1=getSingleNum(cost1);
            int cost2=getAdd(name2,l2);
            cost2=getSingleNum(cost2);

            double ratio1=0;
            double r1=cost1,r2=cost2;

            if(cost1>cost2)ratio1=(r2/r1)*100.0;
            else{
                ratio1=(r1/r2)*100.0;
            }
            printf("%.2lf %\n",ratio1);

    }
    return 0;
}
