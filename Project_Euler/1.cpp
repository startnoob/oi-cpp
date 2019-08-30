/*************************************************************************
	> File Name: 1.cpp
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
bool judge(int x)
{
    if(x%3==0||x%5==0) return 1;
    return 0;
}
signed main()
{
    int cnt=0;
    for(int i=3;i<1000;i++)
    {
        if(judge(i)) cnt+=i;
        //cout<<judge(i)<<endl;
    }
    printf("%lld",cnt);
}
