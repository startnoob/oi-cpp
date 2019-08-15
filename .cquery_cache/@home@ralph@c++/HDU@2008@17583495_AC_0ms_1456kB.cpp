/*************************************************************************
	> File Name: 6.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月28日 星期五 22时47分09秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        double a;
        int s[4]={0};
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a<0) s[0]++;
            if(a==0) s[1]++;
            if(a>0) s[2]++;
        }
        printf("%d %d %d\n",s[0],s[1],s[2]);
    }
}
