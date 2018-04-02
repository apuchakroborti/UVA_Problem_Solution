#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int a,b,carry,carry_count,rm_a,rm_b;
        //be care here if you pu && a!=0 && b!=0 then wrong answer
    	while(scanf("%lld%lld",&a,&b)==2)
        {
            if(a==0 && b==0)break;

            carry_count=0;
            carry=0;
            while(a>0||b>0){
                rm_a=a%10;
                rm_b=b%10;
                if(rm_a+rm_b+carry>9){
                    carry_count++;
                    carry=1;
                }
                else{
                    carry=0;
                }
                //carry=(a%10+b%10+carry)/10;
                //carry_count=carry_count+carry;
                a=a/10;
                b=b/10;

            }
            if(carry_count==0){
                  printf("No carry operation.\n");
            }
            else if(carry_count==1){
                  printf("1 carry operation.\n");
            }
            else{
                  printf("%lld carry operations.\n",carry_count);
            }
        }


    return 0;
}
