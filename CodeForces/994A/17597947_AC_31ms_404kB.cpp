/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月30日 星期日 22时51分23秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[100000];
int st[100];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>s[i];
    for(int i=1;i<=m;i++)
    {
        int a;
        cin>>a;
        st[a]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(st[s[i]]>0) cout<<s[i]<<" ";
    }
}