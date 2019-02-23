/*************************************************************************
	> File Name: a.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月31日 星期四 09时50分07秒
 ************************************************************************/
//what?
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ge,k;
    cin>>n>>k;
    ge=ceil(n/2.0);
    if(2*k-1<=n) cout<<2*k-1<<endl;
    else cout<<(k-ge)*2<<endl;
    return 0;
}
