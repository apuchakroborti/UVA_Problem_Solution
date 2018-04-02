#include<bits/stdc++.h>
using namespace std;
int main()
{
        int c;
        scanf("%d",&c);
    	while(c--)
        {
            int N;
            scanf("%d",&N);
            int num[N];
            int sum=0;
            for(int i=0;i<N;i++){
                scanf("%d",&num[i]);
                sum+=num[i];
            }
            double avg=sum/N;
            int count1=0;
            for(int i=0;i<N;i++){
                if(num[i]>avg)count1++;
            }
            double res=(double)count1/(double)N;
            res=res*100;
            printf("%.3lf%\n",res);


        }


    return 0;
}
