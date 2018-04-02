#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("uva_11462.txt","r",stdin);
    //freopen("uva_11462_out.txt","w",stdout);
    int N;
    while(scanf("%d",&N) && N){
            int age[100+10];
            //memset(age,0,sizeof(age));
                for(int i=0;i<=100;i++)age[i]=0;

                for(int i=0;i<N;i++)
                {
                    int x;
                    cin>>x;
                    age[x]++;
                }
                int num=N;
                for(int i=0;i<=100;i++)
                {
                    while(age[i]--)
                    {
                        (num==1)?cout<<i<<endl:cout<<i<<" ";
                        num--;
                    }
                }

    }
    return 0;
}
