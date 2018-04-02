#include<bits/stdc++.h>
using namespace std;
//FA0ETASINAHGRI0NATWON0QA0NARI0
int main()
{

    int press[]={0,1,2,0,1,2,0,1,2,0,1,2,0,1,2,0,1,2,3,0,1,2,0,1,2,3};
    int t;
    int i=1;

    scanf("%d",&t);
    char ch[1];
    gets(ch);
    while(t--){
        char str[101];
        gets(str);
        int len=strlen(str);
        int count1=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]==' ')count1+=1;
            else
            {
                count1+=press[str[i]-'a']+1;
            }
        }
        printf("Case #%d: %d\n",i,count1);
        i++;
    }
    return 0;
}
