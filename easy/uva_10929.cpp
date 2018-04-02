#include<bits/stdc++.h>
using namespace std;

int main()
{


    char str[1025];
    while(scanf("%s",&str)==1){
        //if(str[0]-'0'==0)break;
        int len=strlen(str);
        if(len==1 && (str[0]-'0')==0)break;
        int sum=0;
        for(int i=0;i<len;i++)
        {
            sum=sum*10+str[i]-'0';
            sum=sum%11;
        }
        //if(len==1 && sum==0)break;
        if(sum==0)printf("%s is a multiple of 11.\n",str);
        else printf("%s is not a multiple of 11.\n",str);
    }
    return 0;
}
