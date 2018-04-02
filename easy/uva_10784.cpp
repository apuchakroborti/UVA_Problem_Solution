#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    int Case=1;
    while(scanf("%lld",&x) && x)
    {
        long long int no_sides=ceil((3+sqrt(9+8*x))/2);
        printf("Case %d: %lld\n",Case++,no_sides);

    }

    return 0;
}
