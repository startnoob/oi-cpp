/*************************************************************************
	> File Name: 6.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月08日 星期五 19时59分02秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int time;
    int sco;
} a[100000];
bool zzz[10000];
bool cmp(node x,node y)
{
    return x.sco>y.sco;
}
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&a[i].time);
    for(int i=0; i<n; i++) scanf("%d",&a[i].sco);
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
        int k=0;
        for(k=a[i].time; k>=0; k--)
        {
            if(zzz[k]==false) break;
        }
        if(k!=0)
        {
            cnt+=a[i].sco;
            zzz[k]=true;
        }
    }
    printf("%d",cnt);
}

