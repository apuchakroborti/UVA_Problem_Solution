#include<bits/stdc++.h>
using namespace std;
int main()
{
        int c;
        scanf("%d",&c);

    	while(c--)
        {
            //int N;
            //scanf("%d",&N);
            string str;
            cin>>str;
            int count1=0;
            int res=0;
            for(int i=0;i<str.length();++i)
            {
                if(str[i]=='O')
                {
                    count1++;
                    res+=count1;
                }
                else{
                count1=0;
                }
            }
            cout<<res<<endl;
        }


    return 0;
}
