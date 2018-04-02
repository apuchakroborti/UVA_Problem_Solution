#include<bits/stdc++.h>
using namespace std;

int main()
{

        int t;
        cin>>t;
        int i=1;
    	while(t--)
        {
            long long int a,b,c;
            scanf("%lld%lld%lld",&a,&b,&c);
            if(a<=0 || b<=0 || c<=0) cout<<"Case "<<i<<": Invalid"<<endl;
            else if(a+b<=c || b+c <=a || a+c <=b)cout<<"Case "<<i<<": Invalid"<<endl;
            else if(a==b && b==c)cout<<"Case "<<i<<": Equilateral"<<endl;
            else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))cout<<"Case "<<i<<": Isosceles"<<endl;
            else if(a!=b && b!=c)cout<<"Case "<<i<<": Scalene"<<endl;
            else cout<<"Case "<<i<<": Scalene"<<endl;
            i++;
        }


    return 0;
}

