/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年11月18日 星期日 09时45分33秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[1000],cnt;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        cin>>s[i];
    }
    for(int i=1;i<=a;i++)
    {
        if(s[i]>=s[b]&&s[i]>0) cnt++;
        else break;
    }
    cout<<cnt;
}
