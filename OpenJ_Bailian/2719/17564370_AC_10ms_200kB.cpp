/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月26日 星期三 18时49分12秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[15],tall,ans=0;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cin>>tall;
    for(int i=0;i<10;i++)
    {
        if(tall+30>=a[i]) ans++;
    }
    cout<<ans;
}
