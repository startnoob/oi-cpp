/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月01日 星期五 18时31分52秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main()
{
    int n,maxn=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        mp[x]++;
        if(mp[x]>maxn) maxn=mp[x];
    }

    //if(mp.find(1)!=mp.end) 查找
    for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==maxn) printf("%d ",it->first);  
    }
}

