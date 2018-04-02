#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1){
        if(n==0)break;

        long long int root=sqrt(n);
        if(root*root==n){
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }


    }
    return 0;
}
