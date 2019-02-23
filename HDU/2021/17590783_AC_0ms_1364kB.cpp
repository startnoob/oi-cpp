/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 23时02分22秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int a[101];
    int a100,a50,a10,a5,a2,a1,t1,t2;
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int sum=0;
        for(i=0;i<n;i++)
        {
            a100=a[i]/100;
            t1=a[i]%100;
            a50=t1/50;
            t2=t1%50;
            a10=t2/10;
            t1=t2%10;
            a5=t1/5;
            t2=t1%5;
            a2=t2/2;
            t1=t2%2;
            a1=t1;
            sum=a100+a50+a10+a5+a2+a1+sum;
        }
        printf("%d\n",sum);
    }
    return 0;
}
