#include<bits/stdc++.h>
using namespace std;

//999999999999999999999
int main()
{

    long long int n;
    while(scanf("%lld",&n)==1){
        if(n<0)break;
        long long num=n;
        vector<int> ter;
        while(num!=0)
        {
            int d=num%3;
            ter.push_back(d);
            num=num/3;
        }
        for(int i=ter.size()-1;i>=0;i--)
        {
            printf("%d",ter[i]);
        }
        if(n==0)printf("0");
        printf("\n");
    }
    return 0;
}
