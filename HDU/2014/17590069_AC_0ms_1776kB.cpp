/*************************************************************************
	> File Name: 6.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 21时25分10秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int s[100000]={0};
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        double ans=0;
        for(int i=1;i<n-1;i++)
        {
            ans+=s[i];
        }
        ans/=n-2;
        printf("%.2lf\n",ans);
    }
}
