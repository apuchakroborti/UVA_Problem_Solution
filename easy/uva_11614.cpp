#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    int t;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&x);
        long long int no_lines=floor((-1+sqrt(1+8*x))/2);
        printf("%lld\n",no_lines);

    }

    return 0;
}
