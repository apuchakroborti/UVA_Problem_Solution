#include<bits/stdc++.h>
using namespace std;
int visited[30];
int adj[30][30];

void dfs(int v)
{

    visited[v]=1;
    for(int i=0;i<30;i++)
    {
        if(adj[v][i] && !visited[i])dfs(i);
    }
    return;
}

int main()
{
        int t;
        cin>>t;
        scanf("\n");
    	while(t--)
        {
            //reset
            for(int i=0;i<30;i++)visited[i]=0;
            for(int i=0;i<30;i++)
            {
                for(int j=0;j<30;j++)
                {
                    adj[i][j]=0;
                }
            }
            //
            char node[5];
            gets(node);
            int n=node[0]-'A';
            char edge[5];

            while(gets(edge) && edge[0])
            {
                adj[edge[0]-'A'][edge[1]-'A']=1;
                adj[edge[1]-'A'][edge[0]-'A']=1;
            }
            int cnt=0;
            for(int i=0;i<=n;i++)
            {
                if(!visited[i])
                {
                    dfs(i);
                    cnt++;
                }
            }
            cout<<cnt<<endl;
            if(t)cout<<endl;

        }


    return 0;
}

