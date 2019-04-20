/*************************************************************************
	> File Name: D.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Sat 20 Apr 2019 10:53:54 AM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<deque>
#include<vector>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<set>
using namespace std;
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
struct node
{
    int x,y,f,step;
};
node queue[205*205*2];
bool mark[205][205][2];
char b[205][205];
int b_n,b_m;
int option_x[6]={1,0,-1,0};
int option_y[6]={0,-1,0,1};
int bfs(int start_x,int start_y)
{
    mark[start_x][start_y][0]=1;
    int head=0,tail=0;
    node temp;
    temp.x=start_x,temp.y=start_y,temp.f=0;temp.step=0;
    queue[tail++]=temp;
    while(head<tail)
    {
        node now=queue[head++];
        if(b[now.x][now.y]=='G'&&now.f==0)
        {
            temp.x=now.x;
            temp.y=now.y;
            temp.f=1;
            temp.step=now.step+1;
            if(!mark[temp.x][temp.y][temp.f])
            {
                mark[temp.x][temp.y][temp.f]=1;
                queue[tail++]=temp;
            }
            continue;
        }
        fo(i,0,3,1)
        {
            int next_x=now.x+option_x[i];
            int next_y=now.y+option_y[i];
            if(next_x<0||next_x>=b_n||next_y<0||next_y>=b_m) continue;
            if(b[next_x][next_y]=='#'||mark[next_x][next_y][0]) continue;
            if(b[next_x][next_y]=='M') return now.step+1;
            mark[next_x][next_y][0]=1;
            temp.x=next_x,temp.y=next_y,temp.f=0,temp.step=now.step+1;
            queue[tail++]=temp;
        }
    }
    return -1;
}
int main()
{
    cin>>b_n>>b_m;
    int st_x,st_y;
    fo(i,0,b_n-1,1)
    {
        fo(j,0,b_m-1,1)
        {
            cin>>b[i][j];
            if(b[i][j]=='@')
            {
                st_x=i;
                st_y=j;
            }
        }
    }
    int ans=bfs(st_x,st_y);
    if(ans==-1) cout<<"You can't save Mengxin";
    else cout<<ans;
}
