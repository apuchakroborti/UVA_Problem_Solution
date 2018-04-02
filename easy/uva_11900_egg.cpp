#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int c=1;
    while(t--){

        int n,P,Q;
        cin>>n>>P>>Q;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count1=0;
        int sum=0;
        int item=0;
        for(int i=0;i<n;i++)
        {
            if(item+1<=P && sum+arr[i]<=Q )
            {
                sum+=arr[i];
                item++;
            }
            else break;
        }
        printf("Case %d: %d\n",c,item);
        c++;

    }
    return 0;
}
