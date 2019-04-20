/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 19 Apr 2019 06:10:29 PM CST
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
int cnt,b_n,b_m;
int option_x[5]={1,-1,0,0};
int option_y[5]={0,0,1,-1};
char b[1000][1000];

void dfs(int pox,int poy)
{
    if(pox==b_n&&poy==b_m)
    {
        cnt++;
        return;
    }
    fo(i,0,3,1)
    {
        int next_x=pox+option_x[i],next_y=poy+option_y[i];
        if(b[next_x][next_y]=='*')
        {
            b[pox][poy]='#';
            dfs(next_x,next_y);
            b[pox][poy]='*';
        }
    }
}
int main()
{
    cin>>b_n>>b_m;
    for(int i=1;i<=b_n;i++)
    {
        for(int j=1;j<=b_m;j++)
        {
            cin>>b[i][j];
        }
    }
    dfs(1,1);
    cout<<cnt;
}
