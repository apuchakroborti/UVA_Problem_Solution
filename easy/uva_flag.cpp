#include<bits/stdc++.h>
using namespace std;
//#define pi arcos(-1)
int main()
{
        double pi=acos(-1);
        int t;
        cin>>t;
    	while(t--)
        {
            double L;
            cin>>L;
            double B=(6*L)/10;
            double R=(L/5);
            double red_area=pi * R*R;
            double gre_area=L*B-red_area;

            printf("%.2lf %.2lf\n",red_area,gre_area);

        }


    return 0;
}

