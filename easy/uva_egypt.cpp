#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,b,c;
    	while(scanf("%lld%lld%lld",&a,&b,&c)==3)
        {
            if(a==0 && b==0 && c==0)break;
            else if(a<=0 || b<=0 || c<=0) cout<<"wrong"<<endl;
            else if(a+b<=c || b+c <=a || a+c <=b)cout<<"wrong"<<endl;
            else if(a*a+b*b==c*c || b*b+c*c==a*a ||a*a+c*c==b*b)cout<<"right"<<endl;
            else cout<<"wrong"<<endl;
        }


    return 0;
}

