#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    int i=1;
    while(t--){
    int arr[3];
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
    sort(arr,arr+3);
    //if(a>=b && a<=c)printf("Case %d: %d\n",i,a);
    //else if(b>=minv && b<=maxv)printf("Case %d: %d\n",i,b);
    //else if(c>=minv && c<=maxv)printf("Case %d: %d\n",i,c);
    printf("Case %d: %d\n",i,arr[1]);
    i++;


    }
    return 0;
}
