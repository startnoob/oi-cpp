/*************************************************************************
        > File Name: 11-30.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2018年11月30日 星期五 15时53分41秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int cnt;
int main()
{
    int n;
    cin>>n;
    int now=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        now=now+b-a;
        if(now>cnt) cnt=now;
    }
    cout<<cnt;
}
