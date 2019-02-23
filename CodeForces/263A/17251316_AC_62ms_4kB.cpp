/*************************************************************************
        > File Name: 11-30-d.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2018年11月30日 星期五 16时48分57秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a;
            if(a==1) cout<<abs(i-3)+abs(j-3);
        }
    }
}
