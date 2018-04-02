#include<bits/stdc++.h>
using namespace std;

int main()
{
    double pi=acos(-1);

    double a,b,c,yellow_area,violet_area,red_area;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3){
        double p=(a+b+c)/2;
        double triangle_area=sqrt(p*(p-a)*(p-b)*(p-c));
        double R=(a*b*c)/4/triangle_area;
        double r=sqrt((p-a)*(p-b)*(p-c)/p);
        yellow_area=pi*R*R-triangle_area;
        red_area=pi*r*r;
        violet_area=triangle_area-red_area;

        printf("%.4lf %.4lf %.4lf\n",yellow_area,violet_area,red_area);




    }
    return 0;
}
