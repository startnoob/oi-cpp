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
#define int long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
signed main()
{
    int t;
    scanf("%lld",&t);
    while(t--)
    {
        int bun,beef,chicken,p_a,p_b;
        scanf("%lld%lld%lld",&bun,&beef,&chicken);
        scanf("%lld%lld",&p_a,&p_b);
        int cnt=0;
        bun/=2;
        if(p_a<p_b)
        {
            swap(p_a,p_b);
            swap(beef,chicken);
        }
        int res=min(bun,beef);
        bun-=res,beef-=res;
        cnt+=p_a*res;
        res=min(bun,chicken);
        bun-=res,chicken-=res;
        printf("%lld\n",cnt+p_b*res);
    }
}
