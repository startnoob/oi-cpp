/*************************************************************************
	> File Name: B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 19 Apr 2019 06:34:08 PM CST
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
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
int b[400][400];
queue<int> q_x;
queue<int> q_y;
void bfs();
int now_x,now_y,tar_x,tar_y,n;
int option_x[9]={1,-1,2,-2,1,-1,2,-2};
int option_y[9]={2,2,-1,-1,-2,-2,1,1};
int main()
{
    cin>>n;
    scanf("%d%d%d%d",&now_x,&now_y,&tar_x,&tar_y);
    q_x.push(now_x);
    q_y.push(now_y);
    bfs();
    cout<<b[tar_x][tar_y];
}
void bfs()
{
    while(!q_x.empty())
    {
        if(q_x.front()==tar_x&&q_y.front()==tar_y) return;
        fo(i,0,7,1)
        {
            int next_x=q_x.front()+option_x[i],next_y=q_y.front()+option_y[i];
            if(next_x>=0&&next_x<n&&next_y>=0&&next_y<n&&b[next_x][next_y]==0)
            {
                b[next_x][next_y]=b[q_x.front()][q_y.front()]+1;
                q_x.push(next_x);
                q_y.push(next_y);
            }
        }
        q_x.pop();
        q_y.pop();
    }
}
