/*************************************************************************
        > File Name: li.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2019年01月27日 星期日 12时37分43秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ans+=i*i*i;
    }
    cout<<ans;
}
