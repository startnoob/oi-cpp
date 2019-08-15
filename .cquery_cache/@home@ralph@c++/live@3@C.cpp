/*************************************************************************
	> File Name: 5.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月15日 星期五 19时51分11秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int n;
int ans(int n,int m)
{
    int answ=0;
    for(int i=2;i<=n;i++)
    {
        answ=(answ+m)%i;
    }
    return answ;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",ans(a,b));
}

