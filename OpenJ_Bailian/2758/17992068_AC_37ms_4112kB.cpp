/*************************************************************************
	> File Name: fb.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月26日 星期六 17时16分36秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int f[10000000];
int main()
{
    f[1]=f[2]=1;
    for(int i=3;i<=1000000;i++) f[i]=(f[i-1]+f[i-2])%1000;
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        cout<<f[a]<<endl;
    }
}
