#include<bits/stdc++.h>
using namespace std;

int main()
{
    //sieve code
    int limit=3000;
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
        }
    //


    int t;
    cin>>t;
    int i=1;
    while(t--){
        string str;
        cin>>str;
        int nu[10];
        int AZ[26];
        int az[26];
        memset(nu,0,sizeof(nu));
        memset(AZ,0,sizeof(AZ));
        memset(az,0,sizeof(az));
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                nu[str[i]-'0']++;
            }
            if(str[i]>='A' && str[i]<='Z')
            {
                AZ[str[i]-'A']++;
            }
            if(str[i]>='a' && str[i]<='z')
            {
                az[str[i]-'a']++;
            }
        }
        printf("Case %d: ",i);
        int pc=0;
        for(int i=0;i<10;i++)
        {
            if(prime[nu[i]]==1)
            {
                printf("%c",i+'0');
                pc=1;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(prime[AZ[i]]==1)
            {
                printf("%c",i+'A');
                pc=1;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(prime[az[i]]==1)
            {
                printf("%c",i+'a');
                pc=1;
            }
        }
        if(pc==1)printf("\n");
        else
        {
            printf("empty\n");
        }

        i++;
    }
    return 0;
}
