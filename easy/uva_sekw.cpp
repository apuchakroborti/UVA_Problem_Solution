#include<bits/stdc++.h>
using namespace std;

int main()
{
    //long long int n;
    //while(scanf("%lld",&n)==1){
    while(1){
        string n;
        cin>>n;
        if(n[0]-'0'==0)break;
        long long int res=0;
        long long int k=1;
        for(int i=n.length()-1;i>=0;i--){
            res=res+(n[i]-'0')*(pow(2,k)-1);
            k++;
        }
        /*
        while(n!=0){
            res=res+(n%10)*(pow(2,k)-1);
            k++;
            n=n/10;
        }*/

        printf("%lld\n",res);

    }
    return 0;
}
