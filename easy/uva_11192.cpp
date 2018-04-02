#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g;
    char str[1005];
    while(scanf("%d",&g)==1 && g){

            scanf(" ");
            gets(str);
            int len=strlen(str);
            int d=len/g;

          for(int i=1;i<=g;i++)
          {
            int a=i*d;
            for(int j=a-1;j>=a-d;j--)
            {
                printf("%c",str[j]);

            }

          }
          printf("\n");


    }
    return 0;
}
