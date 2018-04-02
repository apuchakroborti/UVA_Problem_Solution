#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int Case=1;
    while(t--)
    {
        int l,w,h;
        scanf("%d%d%d",&l,&w,&h);
        if(l<=20 && w<=20 && h<=20)printf("Case %d: good\n",Case++);
        else printf("Case %d: bad\n",Case++);

    }

    return 0;
}
