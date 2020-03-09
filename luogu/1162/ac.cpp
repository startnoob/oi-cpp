/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com

 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<deque>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<set>
using namespace std;
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
int board[40][40];
bool mark[40][40];
int movex[5]= {0,0,-1,1};
int movey[5]= {1,-1,0,0};
bool bfs(int xx,int yy);
void init()
{
    fo(i,0,39,1)
    {
        fo(j,0,39,1)
        {
            board[i][j]=-1;
        }
    }
}
void read(int n)
{
    fo(i,1,n,1)
    {
        fo(j,1,n,1)
        {
            scanf("%d",&board[i][j]);
        }
    }

}
void output(int n)
{
    printf("\n");
    fo(i,0,n,1)
    {
        fo(j,0,n,1) printf("%d ",board[i][j]);
        printf("\n");
    }
}
signed main()
{
    init();
    int n;
    scanf("%d",&n);
    read(n);
    fo(i,1,n,1)
    {
        fo(j,1,n,1)
        {
            if(board[i][j]==0&&bfs(i,j)==true) board[i][j]=2;
        }
    }
    output(n);
}
bool bfs(int xx,int yy)
{
    bool mark[40][40];
    memset(mark,sizeof(mark),0);
    mark[xx][yy]=1;
    queue <int> qx,qy;
    qx.push(xx);
    qy.push(yy);
    while(!qx.empty())
    {
        cout<<qx.front()<<" "<<qy.front()<<endl;
        int nowx=qx.front(),nowy=qy.front();
        if(board[nowx][nowy]==-1)
        {
            printf("Fail in %d %d\n",xx,yy);
            return false;
        }
        fo(i,0,3,1)
        {
            int next_x=nowx+movex[i],next_y=nowy+movey[i];
            if(mark[next_x][next_y]==0)
            {
                qx.push(next_x);
                qy.push(next_y);
                mark[next_x][next_y]=1;
            }
        }
        qx.pop();
        qy.pop();
    }
    return true;
}
