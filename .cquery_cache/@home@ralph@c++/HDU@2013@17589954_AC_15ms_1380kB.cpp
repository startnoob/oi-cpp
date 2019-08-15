/*************************************************************************
	> File Name: 5.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 21时20分56秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int cnt=1;
        for(int i=1;i<n;i++) 
        {
            cnt=(cnt+1)*2;
        }
        cout<<cnt<<endl;
    }
}
