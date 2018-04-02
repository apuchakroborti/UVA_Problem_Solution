#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x,y;
    double get_dis(Point& pos)
    {
        return sqrt((x-pos.x)*(x-pos.x)+(y-pos.y)*(y-pos.y));
    }

}points[8];

double dis[8][8];
int seq[8],min_seq[8];
double min_cost;
bool visit[8];
int n;
void dfs(int prev_index,int cur_node,double len)
{
    if(cur_node==n)
    {
        if(min_cost>len)
        {

            min_cost=len;
            for(int i=0;i<n;i++)
            {
                min_seq[i]=seq[i];
            }
        }
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!visit[i])
        {
            visit[i]=true;
            seq[cur_node]=i;
            dfs(i,cur_node+1,len+dis[prev_index][i]);
            visit[i]=false;
        }

    }

}
int main()
{
    freopen("uva_216_in.txt","r",stdin);
    int c=1;
    while(scanf("%d",&n) && n)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&points[i].x,&points[i].y);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                dis[i][j]=dis[j][i]=points[i].get_dis(points[j])+16;
            }
        }
        min_cost=1e7;
        for(int i=0;i<n;i++)
        {
            visit[i]=true;
            seq[0]=i;
            dfs(i,1,0.0);//i=node position,1=curnode,0=min distanve value
            visit[i]=false;
        }
        puts("**********************************************************");
        printf("Network #%d\n", c++);
        for(int i=0;i<n-1;i++)
        {

            printf("Cable requirement to connect (%d,%d) to (%d,%d) is %.2lf feet.\n",
            points[min_seq[i]].x,points[min_seq[i]].y,points[min_seq[i+1]].x,points[min_seq[i+1]].y,dis[min_seq[i]][min_seq[i+1]]);
        }
        printf("Number of feet of cable required is %.2lf.\n", min_cost);//+16*(n-1)


    }

    return 0;
}
