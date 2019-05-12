/*************************************************************************
	> File Name: D.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月11日 星期六 16时52分30秒
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
int cnt;
int road[6000];
int shuan,tanw,n;
void dfs(int x,int y);
int main()
{
    cin>>n>>shuan>>tanw;
    dfs(1,1);
    cout<<cnt;
}
void dfs(int x,int y)
{
    //for(int i=1 i<=n; i++) cout<<road[i]<<" ";
    //cout<<endl;
    if(x>tanw)
    {
        cnt+=1;
        return;
    }
    if(y>n) return;
    // a
    if(shuan!=0)
    {
        road[y]=1;
        shuan--;
        dfs(x,y+1);
        road[y]=0;
        shuan++;
    }
    for(int j=y; j<=n; j++)
    {
        if(road[j-1]!=2)
        {
            road[j]=2;
            dfs(x+1,j+1);
            road[j]=0;
        }
    }
}

