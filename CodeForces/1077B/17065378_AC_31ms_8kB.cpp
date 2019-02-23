/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年11月18日 星期日 09时45分33秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
bool in[2000];
bool safe(int tar,bool a[])
{
    if(tar==0) return 0;
    if(in[tar-1]==1&&in[tar+1]==1&&in[tar]==0) return 1;
    else return 0;
}
int cnt;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) cin>>in[i];
    for(int i=2;i<=t;i++)
    {
        if(safe(i,in)==1)
        {
            if(safe(i-2,in)==1)
            {
                cnt++;
                in[i-1]=0;
            }
            else
            {
                cnt++;
                in[i+1]=0;
            }
        }
    }
    cout<<cnt;
    return 0;
}
