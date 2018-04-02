#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char num1[201];
        char num2[201];
        scanf("%s%s",num1,num2);
        //int l1=strlen(num1);
        //int l2=strlen(num2);
        int l1=0;
        while(num1[l1]!='\0')l1++;
        int l2=0;
        while(num2[l2]!='\0')l2++;
        //cout<<l1<<" "<<l2<<endl;
        int index1=0,index2=0;
        int num[201];
        int num_index=0;
        int carry=0;
        while(1)
        {
            int sum=0;
            if(index1>=l1 && index2>=l2)break;
            if(index1<l1)sum+=num1[index1]-'0';
            if(index2<l2)sum+=num2[index2]-'0';
            sum+=carry;
            num[num_index]=sum%10;
            carry=sum/10;
            index1++;
            index2++;
            num_index++;

        }
        if(carry>0)num[num_index++]=carry;
        int i=0;
        while(i<num_index && num[i]==0)i++;
        if(i>=num_index)printf("0\n");
        else
        {
            for(int j=i;j<num_index;j++)
            {
                printf("%d",num[j]);
            }
            printf("\n");
        }

    }

    return 0;
}
