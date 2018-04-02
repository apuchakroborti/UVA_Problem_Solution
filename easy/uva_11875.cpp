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
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        printf("Case %d: %d\n",i,arr[N/2]);
        i++;

    }
    return 0;
}
