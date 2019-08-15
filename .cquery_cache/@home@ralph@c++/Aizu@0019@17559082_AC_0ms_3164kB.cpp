/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月25日 星期二 19时01分36秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
long long fact(long long x)
{
    if(x==0) return 1;
    else return fact(x-1)*x;
}
int main()
{
    long long n;
    scanf("%lld",&n);
    printf("%lld\n",fact(n));
}

