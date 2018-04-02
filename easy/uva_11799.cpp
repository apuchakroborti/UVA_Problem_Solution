#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int i=1;
    while(t--){
    int N;
    cin>>N;
    int arr[N];
    int j=0;
    int maxv=-1;
    while(j<N)
    {
        scanf("%d",&arr[j++]);
        maxv=max(maxv,arr[j-1]);
    }
    printf("Case %d: %d\n",i,maxv);
    i++;


    }
    return 0;
}
