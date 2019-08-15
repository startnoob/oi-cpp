/*************************************************************************
	> File Name: 3.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 23时14分38秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int minz=0,a,x,y;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a;
                if(abs(a)>abs(minz))
                {
                    minz=a,x=i,y=j;
                }
            }
        }
        printf("%d %d %d\n",x,y,minz);
    }
}
