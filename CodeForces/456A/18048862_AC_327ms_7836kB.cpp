/*************************************************************************
	> File Name: laptop.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月29日 星期二 18时51分07秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int pre;
    int val;
} a[1000000];
bool cmp(node x,node y)
{
    return x.val<y.val;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a[i].pre>>a[i].val;
    }
    sort(a,a+t,cmp);
    for(int i=1;i<t;i++)
    {
        if(a[i].pre<a[i-1].pre&&a[i].val>a[i-1].val)
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
}
