#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100001];
    while(scanf("%s",str)!=EOF){
        int flag=0;
        list<char> b;
        list<char>::iterator ans=b.begin();
        int len=strlen(str);
        for(int i=0;i<len;i++)
        {
            if(str[i]=='[')ans=b.begin();
            else if(str[i]==']')ans=b.end();
            else b.insert(ans,str[i]);
        }
        for(ans=b.begin();ans!=b.end();ans++)printf("%c",*ans);
        printf("\n");

    }
    return 0;
}
