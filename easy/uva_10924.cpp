#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    if(n==2 || n==3)return 1;
    for(int i=2;i<=ceil(sqrt(n));i++)
    {
        if(n%i==0)return 0;
    }
    return 1;


}

int main()
{
    //
    /*//this sieve code is not acceptable by uva so use sqrt method
        int limit=1550;
        int prime[limit+5];
        prime[0]=-1;
        prime[1]=-1;
        for(int i=2;i<=limit;i++){
            prime[i]=1;
        }
        for(int i=2;i*i<=limit;i++){
            if(prime[i]==1){

                for(int j=i*2;j<=limit;j=j+i){
                    prime[j]=-1;
                }
            }
        }*/
    //


    char str[25];
    while(scanf("%s",str)!=EOF){
        int len=strlen(str);
        int sum=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]>='a' && str[i]<='z')sum+=str[i]-'a'+1;
            else if(str[i]>='A' && str[i]<='Z')sum+=str[i]-'A'+1+26;
        }
        if(prime(sum)==1)printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
