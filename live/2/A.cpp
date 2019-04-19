/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月08日 星期五 18时43分10秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int le,ri;
}a[100000];
bool cmp(node x,node y)
{
    return x.le<y.le;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d%d",&a[i].le,&a[i].ri);
    sort(a,a+n,cmp);
    int ans=1,e=a[0].ri;
    for(int i=1;i<n;i++)
    {
        if(a[i].le>e)
        {
            ans++;
            e=a[i].ri;
        }
        else if(a[i].ri<e) e=a[i].ri;
    }
    printf("%d",ans);
}
