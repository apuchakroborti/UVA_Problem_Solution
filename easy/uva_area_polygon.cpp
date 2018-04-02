#include<bits/stdc++.h>
using namespace std;
int main()
{
        double r,n;

    	while(scanf("%lf%lf",&r,&n)!=EOF)
        {
            if(r<=0 || n<=2)break;
            double area=(r*r*n*sin((2*acos(-1))/n))/2;
            printf("%.3lf\n",area);

        }


    return 0;
}
