#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int root=int(sqrt(n))+1;
        long long res=0;
        for(int i=1;i<root;i++)
        {
            res+=n/i;
        }
        root--;
        res=res*2-root*root;
        cout<<res<<endl;;

    }

    return 0;
}
