#include<bits/stdc++.h>
using namespace std;

int main()
{


    long long int n;
    while(scanf("%lld",&n)==1){
        if(n==0)break;
        string res="";
        long long int num=n;
        int count1=0;
        vector<int> b;
        while(num!=0)
        {
            int d=num%2;
            if(d==1)count1++;
            num=num/2;
            //char ch=d+'0';
            b.push_back(d);
            //res.append(ch+"");
            //res=d+res;

        }
        printf("The parity of ");
        for(int i=b.size()-1;i>=0;i--)printf("%d",b[i]);
        printf(" is %d (mod 2).\n",count1);


    }
    return 0;
}
