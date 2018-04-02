#include<bits/stdc++.h>
using namespace std;
int main()
{
        int c;
        scanf("%d",&c);
        int i=1;
    	while(c--)
        {
            int N;
            scanf("%d",&N);
            string str;
            cin>>str;
            int B=0,W=0,T=0,A=0;
            for(int i=0;i<N;i++)
            {
                if(str[i]=='A')A++;
                else if(str[i]=='B')B++;
                else if(str[i]=='W')W++;
                else if(str[i]=='T')T++;
            }
            if(A==N)
            {
                printf("Case %d: ABANDONED\n",i);
            }
            else if(B+A==N)
            {
                printf("Case %d: BANGLAWASH\n",i);
            }
            else if(W+A==N)
            {
                printf("Case %d: WHITEWASH\n",i);
            }
            else if(B>W )
            {
                printf("Case %d: BANGLADESH %d - %d\n",i,B,W);
            }
            else if(B<W)
            {
                printf("Case %d: WWW %d - %d\n",i,W,B);
            }
            else if(B==W)
            {
                printf("Case %d: DRAW %d %d\n",i,B,T);
            }

            i++;


        }


    return 0;
}
