/*************************************************************************
	> File Name: shui.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月26日 星期六 20时20分16秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[1000];
int main()
{
    int t,in;
    cin>>t;
    while(t--)
    {
        cin>>in;
        s[in]++;
    }
    printf("%d\n%d\n%d",s[1],s[5],s[10]);
}
