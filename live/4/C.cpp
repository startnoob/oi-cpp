/*************************************************************************
	> File Name: sdsa.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 22 Mar 2019 07:56:24 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int ans=0,n;
void dfs(int x,int top)
{
    if(x==n+1)
    {
        ans++;
        return;
    }
    dfs(x+1,top+1);
    if(top>0) dfs(x,top-1);
}
int main()
{
    scanf("%d",&n);
    dfs(1,0);
    printf("%d",ans);
}

