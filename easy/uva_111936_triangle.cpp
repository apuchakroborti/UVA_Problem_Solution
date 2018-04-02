#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c && b+c>a && c+a>b)printf("OK\n");
        else printf("Wrong!!\n");

    }
    return 0;
}
