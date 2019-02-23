/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月31日 星期四 16时47分59秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=(6-max(a,b)+1),dev=__gcd(6,ans);
    if(ans==7) cout<<"1/1";
    else printf("%d/%d",ans/dev,6/dev);
}
