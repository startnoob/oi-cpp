/*************************************************************************
	> File Name: c.cpp
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
int line[100010];
signed main()
{
    int n,k;
    scanf("%lld%lld",&n,&k);
    fo(i,1,n,1) scanf("%lld",&line[i]);
    int temp=1;
    while(k-temp>=1)
    {
        k-=temp++;
    }
    printf("%lld",line[k]);
}
