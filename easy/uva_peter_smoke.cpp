#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,k;

    	while(scanf("%d%d",&n,&k)!=EOF)
        {
            if(k<=1)break;
            int res=n;
            while(n>=k){
                res=res+(n/k);
                n=n/k+n%k;
            }
            printf("%d\n",res);

        }


    return 0;
}
