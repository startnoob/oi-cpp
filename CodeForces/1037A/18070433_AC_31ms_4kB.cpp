/*************************************************************************
	> File Name: dui.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月30日 星期三 21时30分35秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
long long a,ans;
int main()
{
    cin>>a;
    while(a)
    {
        a/=2;
        ans++;
    }
    cout<<ans;
}
