#include<bits/stdc++.h>
using namespace std;
int prime(long long int n);
int prime(long long int n)
{
    long long int root=ceil(sqrt(n));
    int count1=1;
    for(int i=2;i<=root;i++)
    {
        if(n%i==0)
        {
            count1=0;
            break;
        }
    }
    return count1;

}
//999999999999999999999
int main()
{
        //sieve code does not work for this problem
        /*
	int limit=1050;
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

    long long int n;
    while(scanf("%lld",&n)==1){
        //if(n==0)break;
        if(prime(n)==1){
            long long int rev=0;
            long long int num=n;
            while(num!=0){
                rev=rev*10+num%10;
                num=num/10;
            }
            if(prime(rev)==1 && rev!=n)
            {
                cout<<n<<" is emirp."<<endl;
            }
            else
            {
                cout<<n<<" is prime."<<endl;
            }

        }
        else{
             cout<<n<<" is not prime."<<endl;
        }


    }
    return 0;
}
