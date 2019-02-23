/*************************************************************************
	> File Name: new.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年11月18日 星期日 09时28分56秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    if(n%a!=0&&m%a!=0) cout<<(n/a+1)*(m/a+1);
    else if(n%a==0&&m%a!=0) cout<<(n/a)*(m/a+1);
    else if(n%a!=0&&m%a==0) cout<<(n/a+1)*(m/a);
    else if(n%a==0&&m%a==0) cout<<(n/a)*(m/a);
    return 0;
}
