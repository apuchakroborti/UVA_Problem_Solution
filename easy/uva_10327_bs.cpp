#include<bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    while(scanf("%d",&N)!=EOF){
            int arr[N];
            int n=0;
            while(n<N)cin>>arr[n++];
            int meo=0;
            for(int i=1;i<N;i++)
            {
                for(int j=0;j<N-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                        meo++;
                    }
                }
            }
            cout<<"Minimum exchange operations : "<<meo<<endl;
    }
    return 0;
}
