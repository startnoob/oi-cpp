/*************************************************************************
        > File Name: 3.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2018年12月28日 星期五 12时07分12秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int a,ans=1;
        for(int i=1;i<=t;i++)
        {
            cin>>a;
            if(a%2!=0) ans*=a;
        }
        cout<<ans<<endl;
    }
}
