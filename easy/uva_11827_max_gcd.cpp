#include<bits/stdc++.h>
using namespace std;
int getGcd(int a,int b)
{
    if(a%b==0)return b;
    return getGcd(b,a%b);
}
int main()
{
    int N;
    cin>>N;
    string s;
    scanf(" ");
    while(N--){
        int M=0;

        int arr[1050];
        int j=0;
        getline(cin,s);
        stringstream ss(s);

        while(ss>>arr[j])
        {
            ++j;
            //scanf("%d",&arr[j++]);
        }
        M=j;
        int maxgcd=-1;
        for(int i=0;i<M;i++)
        {
            for(int j=i+1;j<M;j++)
            {
                maxgcd=max(maxgcd,getGcd(arr[i],arr[j]));
            }
        }
        printf("%d\n",maxgcd);

    }
    return 0;
}
