#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    vector< vector<int> > pos;
    while(scanf("%d%d",&n,&m)!=EOF){
        pos.assign(1000000,vector<int>());


        for(int index=0;index<n;index++)
        {
            int ele;
            cin>>ele;
            pos[ele].push_back(index+1);

        }

        for(int i=1;i<=m;i++)
        {
            int k,v;
            cin>>k>>v;

            if(pos[v].size()>=k)
            {
                printf("%d\n",pos[v][k-1]);
            }
            else{
                printf("0\n");
            }

        }

    }
    return 0;
}
