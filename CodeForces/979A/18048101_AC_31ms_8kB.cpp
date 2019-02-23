/*************************************************************************
	> File Name: pizza.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月29日 星期二 18时27分08秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    n++;
    if(n==1) cout<<"0";
    else if(n%2==0) cout<<n/2;
    else cout<<n;
}
