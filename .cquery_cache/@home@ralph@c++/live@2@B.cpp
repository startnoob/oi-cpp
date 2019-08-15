/*************************************************************************
	> File Name: 3.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月08日 星期五 19时01分45秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int left,right;
}a[100000];
bool cmp(node x,node y)
{
    return x.right<y.right;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a[i].left,&a[i].right);
    }
    sort(a,a+n,cmp);
    int cnt=1,e=a[0].right;
    for(int i=1;i<n;i++)
    {
        if(a[i].left>e)
        {
            cnt++;
            e=a[i].right;
        }
    }
    printf("%d",cnt);
}

