#include<bits/stdc++.h>
using namespace std;
#define max_row 8
#define max_col 8
int cost[max_row][max_col];
int x_move[]{2,2,1,1,-2,-2,-1,-1};
int y_move[]{1,-1,2,-2,1,-1,2,-2};
queue<int> Q;
void bfs(int x,int y)
{
    Q.push(x);
    Q.push(y);
    cost[x][y]=0;
    while(!Q.empty())
    {
        int xv=Q.front();
        Q.pop();
        int yv=Q.front();
        Q.pop();
        for(int i=0;i<8;i++)
        {
            int row=xv+x_move[i];
            int col=yv+y_move[i];
            if(row>=0 && row<max_row && col>=0 && col<max_col && cost[row][col]==-1)
            {
                Q.push(row);
                Q.push(col);
                cost[row][col]=cost[xv][yv]+1;
            }
        }
    }

}
int main()
{
        char a[5],b[5];
        while(scanf("%s%s",&a,&b)==2)
        {
            int start_x=a[0]-'a';
            int start_y=a[1]-'1';
            int end_x=b[0]-'a';
            int end_y=b[1]-'1';
            for(int i=0;i<max_row;i++)
            {
                for(int j=0;j<max_col;j++)
                {
                    cost[i][j]=-1;
                }
            }
            bfs(start_x,start_y);
            printf("To get from %s to %s takes %d knight moves.\n",a,b,cost[end_x][end_y]);
        }


    return 0;
}



