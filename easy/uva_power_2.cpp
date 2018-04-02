#include<bits/stdc++.h>
using namespace std;
double NthRoot(double A,double N);

double NthRoot(double A,double N){
        double x1=A;
        double x2=A/N;
        double p=0.0001;
        while(abs(x1-x2)>p){
            x1=x2;
            x2=(1/(double)N)*((N-1.0)*x2+(A/(double)pow(x2,N-1)));
        }
        return x2;
    }
int main()
{
        double n,p;
            //n=7;
            //p=4357186184021382204544;
            //double res=NthRoot(p,n);
            //printf("%.0lf\n",pow(p,1 / n));

    	while(scanf("%lf%lf",&n,&p)==2)
        {
        //    n=7;
         //   p=4357186184021382204544;
            //double res=NthRoot(p,n);
            printf("%.0lf\n",pow(p,1/n));
            //int res1=(int)res;
            //cout<<res1<<endl;
            //cout<<pow(4357186184021382204544,7);
            //printf(".20%lf",pow(1234,7));
        }


    return 0;
}

