/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 29 Mar 2019 06:36:36 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
struct node
{
    char var;
    int dist;
}board[20][600];
int n,m,dis;
int move1[6]= {0,0,1,-1};
int move2[6]= {1,-1,0,0};
queue<int> qx;
queue<int> qy;
int main()
{

    cin>>n>>m;
    getchar();
    for(int i=0; i<=n+1; i++)
    {
        for(int j=0; j<=m+1; j++) board[i][j].var='#';
    }
    char temp[30];
    for(int i=1; i<=n; i++)
    {
        scanf("%s",temp+1);
        for(int j=1; j<=m; j++)
        {
            board[i][j].var=temp[j];
            if(board[i][j].var=='S')
            {
                cout<<i<<" "<<j<<endl;
                qx.push(i);
                qy.push(j);
            }
        }
    }
    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=m+1;j++) cout<<board[i][j].var;
        cout<<endl;
    }
    board[qx.front()][qy.front()].dist=-1;
    int dis=0;
    while(!qx.empty())
    {
        if(board[qx.front()][qy.front()].var=='T')
        {
            cout<<board[qx.front()][qy.front()].dist;
            return 0;
        }
        dis++;
        bool can=false;
        for(int i=0; i<4; i++)
        {
            int nx=qx.front()+move1[i],ny=qy.front()+move2[i];
            if(board[nx][ny].var!='#')
            {
                can=true;
                board[nx][ny].dist=dis;
                //printf("%d %d %d\n",nx,ny,dis);
                qx.push(nx);
                qy.push(ny);
            }
        }
        if(can==)
        board[qx.front()][qy.front()].var='#';
        qx.pop();
        qy.pop();
    }
    cout<<"-1";
    return 0;
}
