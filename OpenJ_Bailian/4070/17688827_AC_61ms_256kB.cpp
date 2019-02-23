/*************************************************************************
	> File Name: 4070.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月12日 星期六 19时33分57秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int b[10],n;
bool st[10];
void dfs(int x);
void print();
int main()
{
    while(1)
    {
        cin>>n;
        if(n==0) break;
        else
        {
            memset(b,0,sizeof(b));
            memset(st,0,sizeof(st));
            dfs(1);
        }
    }
}
void dfs(int x)
{
    if(x>n)
    {
        print();
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(st[i]==0)
        {
            b[x]=i,st[i]=1;
            dfs(x+1);
            b[x]=0,st[i]=0;
        }
    }
}
void print()
{
    for(int i=1; i<n; i++) cout<<b[i]<<" ";
    cout<<b[n]<<endl;
}
