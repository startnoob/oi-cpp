/*************************************************************************
	> File Name: 3.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月15日 星期五 19时03分07秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int tot;
struct link
{
    int val;
    int next;
}s[100000];
bool add(int a,int b)
{
    for(int i=0;s[i].val!=-1;i=s[i].next)
    {
        if(s[i].val==b) return false;
    }
    for(int i=0;s[i].val!=-1;i=s[i].next)
    {
        if(s[i].val==a)
        {
            tot++;
            s[tot].val=b;
            s[tot].next=s[i].next;
            s[i].next=tot;
            return true;
        }
    }
    return false;
}
bool dele(int x)
{
    for(int i=0;s[i].val!=-1;i=s[i].next)
    {
        if(s[s[i].next].val==x)
        {
            s[i].next=s[s[i].next].next;
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    s[0].next=n+1;
    s[n+1].val=-1;
    while(n--)
    {
        int op;
        scanf("%d",&op);
        if(op==1)
        {
            int position,unknown_val;
            scanf("%d%d",&position,&unknown_val);
            if(add(position,unknown_val)==false) puts("error");
            else puts("ok");
        }
        else{
            int unknown_del;
            scanf("%d",&unknown_del);
            if(dele(unknown_del)==true) puts("ok");
            else puts("error");
        }
    }
    for(int i=0;s[i].val!=-1;i=s[i].next)
    {
        printf("%d ",s[i].val);
    }
}

