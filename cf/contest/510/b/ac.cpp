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
char board[70][70];
int mark[70][70],st=0;
int movex[5]={0,0,1,-1};
int movey[5]={-1,1,0,0};
void judge(int nx,int ny,int tn)
{
    //te
    //printf("%d %d\n",nx,ny);
    //te
    if(mark[nx][ny]!=0||st==1)
    {
        st=1;
        return;
    }
    mark[nx][ny]=tn;
    char temp=board[nx][ny];
    for(int i=0;i<4;i++)
    {
        int nowx=nx+movex[i],nowy=ny+movey[i];
        if(board[nowx][nowy]==temp&&mark[nowx][nowy]!=tn-1)
        {
            judge(nowx,nowy,tn+1);
        }
    }
}
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) cin>>board[i][j];
    }
    //每一个为左上角
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            memset(mark,0,sizeof(mark));
            //cout<<"search in"<<i<<" "<<j<<endl;
            judge(i,j,2);
            if(st==1)
            {
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
}
