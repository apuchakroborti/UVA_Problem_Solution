#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    1*1 grid=1= 1^2
    2*2 grid=5= 1^2+2^2
    3*3 grid=14= 1^2+2^2+3^2
    4*4 grid=30= 1^2+2^2+3^2+4^2
    so total number of sqare ,s=n(n+1)(2n+1)/6
    */
    int n;
    while(scanf("%d",&n) && n)
    {
        int s=n*(n+1)*(2*n+1)/6;
        printf("%d\n",s);
    }

    return 0;
}
