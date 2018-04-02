#include<bits/stdc++.h>
using namespace std;

int main()
{
        long long int cur,dest;
    	while(scanf("%lld%lld",&cur,&dest)==2)
        {
            int res=0;
            if(cur==-1 && dest==-1)break;
            res=abs(cur-dest);
            if(res>50)
                res=100-res;
            cout<<res<<endl;

        }


    return 0;
}

