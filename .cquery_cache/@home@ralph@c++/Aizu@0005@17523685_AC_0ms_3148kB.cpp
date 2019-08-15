/*************************************************************************
	> File Name: 23.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 21时32分48秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int ans=__gcd(a,b);
        printf("%d %d\n",ans,a/ans*b);
    }
}
