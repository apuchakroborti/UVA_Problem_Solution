#include<bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin>>t;
    while(t--){
        long long int s,d;
        cin>>s>>d;

        if(s>=d && (s+d)%2==0)
        {
            long long int a=(s+d)/2;
            long long int b=s-a;
                printf("%lld %lld\n",a,b);

        }
        else
        {
                printf("impossible\n");
        }

    }
    return 0;
}
