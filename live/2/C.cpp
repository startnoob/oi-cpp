/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月10日 星期日 19时12分26秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int r[100000];
int main()
{
    int n,m,maxn;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(r[a]<b) r[a]=b;
        if(maxn<b) maxn=b;
    }
    if(r[1]==0||maxn!=m)
    {
        cout<<"-1";
        return 0;
    }
    int e=r[1],cnt=1,x=1;
    while(e!=m)
    {
        maxn=0;
        for(int i=x+1;i<=e+1;i++)
        {
            if(r[i]>maxn) maxn=r[i];
        }
        if(maxn<=e)
        {
            cout<<"-1";
            return 0;
        }
        x=e+1;e=maxn;cnt++;
    }
    printf("%d",cnt);
    return 0;
}
