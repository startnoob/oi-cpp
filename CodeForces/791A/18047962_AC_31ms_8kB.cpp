/*************************************************************************
    > File Name: bear1.cpp
    > Author: ralph
    > Mail: 1694487365@qq.com
    > Created Time: 2019年01月29日 星期二 17时53分37秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=0;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt;
}
