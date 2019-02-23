/*************************************************************************
	> File Name: 2807.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月12日 星期六 21时21分58秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
bool st[1000];
int s[1000];
int main()
{
    int a,i=0,cnt=0;
    while(1)
    {
        cin>>a;
        if(a==0) break;
        s[++i]=a,st[a]=1;
    }
    for(int j=1;j<=i;j++)
    {
        if(st[s[j]*2]==1) cnt++;
    }
    cout<<cnt;
}
