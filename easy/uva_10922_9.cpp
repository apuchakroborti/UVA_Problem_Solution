#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    while(cin>>str){
        if(str[0]-'0'==0)break;
        int sum=0;
        for(int i=0;i<str.length();i++)
        {
            sum+=str[i]-'0';
        }
        if(sum%9==0)
        {
            int degree=1;
            int num=sum;

            while(num!=9 && num>9)
            {
                int n=num;
                int new_num=0;
              while(n!=0)
              {
                new_num+=n%10;
                n=n/10;
              }
              num=new_num;
              degree++;
            }
            cout<<str<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;
        }
        else
        {
            cout<<str<<" is not a multiple of 9."<<endl;
        }



    }
    return 0;
}
