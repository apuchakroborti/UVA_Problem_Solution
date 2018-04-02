#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10];
    int Case=1;
    while(scanf("%s",str)==1)
    {
        int l1=0;
        while(str[l1]!='\0')l1++;
        if(l1==1 && str[0]=='*')break;
        else if(str[0]=='H')printf("Case %d: Hajj-e-Akbar\n",Case++);
        else if(str[0]=='U')printf("Case %d: Hajj-e-Asghar\n",Case++);

    }

    return 0;
}
