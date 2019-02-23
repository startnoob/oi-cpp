/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月28日 星期五 02时00分51秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,ans1;
    while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF)
    {
        ans1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        printf("%.2f\n",ans1);
    }
}
