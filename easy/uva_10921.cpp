#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva_495_in.txt","r",stdin);
    //freopen("uva_495_out.txt","w",stdout);
    char char_map[]={0,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    char str[40];
    while(scanf("%s",str)!=EOF)
    {
        int l1=0;
        while(str[l1]!='\0')l1++;
        for(int i=0;i<l1;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i]=char_map[str[i]-'A'+1]+'0';
            }
        }
        cout<<str<<endl;

    }

    return 0;
}

