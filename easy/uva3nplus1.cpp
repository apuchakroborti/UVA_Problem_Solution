#include<bits/stdc++.h>
using namespace std;
//200000000000000000000000000000
int main()
{
    int i=0,j=0;
    while(scanf("%d%d",&i,&j)==2){
        int index1=0,index2=0;
        if(i>j){
            index1=j;
            index2=i;
        }
        else{
            index1=i;
            index2=j;
        }
        int max_val=-1;
        for(int s=index1;s<=index2;s++){

            long int num=s;
            int c=1;
            while(num!=1){
                if(num%2==0){
                    num=num/2;
                }
                else{
                    num=num*3+1;
                }
                c++;
            }
            max_val=max(c,max_val);

        }
        printf("%d %d %d\n",i,j,max_val);

    }
    return 0;
}
