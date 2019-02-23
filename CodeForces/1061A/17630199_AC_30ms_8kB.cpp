/*************************************************************************
        > File Name: 2.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2019年01月05日 星期六 15时31分45秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b%a!=0) cout<<b/a+1;
    else cout<<b/a;
}