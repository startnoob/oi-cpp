/*************************************************************************
	> File Name: dra.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月28日 星期一 13时17分52秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
bool dragon[10000000];
int main()
{
    int k,l,m,n,d,cnt=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=k;i<=d;i+=k) dragon[i]=true;
    for(int i=l;i<=d;i+=l) dragon[i]=true;
    for(int i=m;i<=d;i+=m) dragon[i]=true;
    for(int i=n;i<=d;i+=n) dragon[i]=true;
    for(int i=1;i<=d;i++)
    {
        if(dragon[i]==true) cnt++;
    }
    cout<<cnt;
}
