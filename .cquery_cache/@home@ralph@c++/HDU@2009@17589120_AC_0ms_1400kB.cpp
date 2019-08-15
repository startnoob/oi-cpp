/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 19时53分03秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    int n;
    while(scanf("%lf%d",&a,&n)!=EOF)
    {
        double ram=a,now=a;
        for(int i=2;i<=n;i++)
        {
            now+=sqrt(ram);
            ram=sqrt(ram);
        }
        printf("%.2f\n",now);
    }
}
