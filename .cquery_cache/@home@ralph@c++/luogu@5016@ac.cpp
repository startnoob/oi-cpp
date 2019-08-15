/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com

 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<deque>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<set>
using namespace std;
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
int bo[100050];
int mid,p1,s1,s2,n;
ll power(int val)
{
    ll cnt=0;
    if(val==1)
    {
        for(int i=1; i<mid; i++)
        {
            cnt+=(mid-i)*bo[i];
        }
    }
    else
    {
        for(int i=n; i>mid; i--) cnt+=(i-mid)*bo[i];
    }
    return cnt;
}
int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++) scanf("%d",&bo[i]);
    scanf("%d%d%d%d",&mid,&p1,&s1,&s2);
    bo[p1]+=s1;
    int st1=power(1),st2=power(2);
    for(int i=1;i<=n;i++)
    {
         
    }
    int dif=0x3f3f3f3f,ans;
    printf("%d",ans);
}
