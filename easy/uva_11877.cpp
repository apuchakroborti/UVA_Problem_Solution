#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(scanf("%d",&n) && n)
    {
        int res=0;
        while(n>=2)
        {
            res+=n/3;
            n=n/3+n%3;
            if(n==2){
                res++;
                break;
            }
        }
        printf("%d\n",res);
    }

    return 0;
}
