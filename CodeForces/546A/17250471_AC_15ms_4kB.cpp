/*************************************************************************
        > File Name: 11-30.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2018年11月30日 星期五 15时59分40秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int k,n,w;
int main()
{
    cin>>k>>n>>w;
    int cnt=0;
    for(int i=1;i<=w;i++) cnt+=i*k;
    if(cnt-n>0) cout<<cnt-n;
    else cout<<"0";
}
