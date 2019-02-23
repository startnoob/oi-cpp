/*************************************************************************
	> File Name: a.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年02月01日 星期五 22时30分20秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int maxn=0,minn;
int main()
{
    int in,n,cnt=0;
    cin>>n>>in;
    maxn=minn=in;
    for(int i=1;i<n;i++)
    {
        cin>>in;
        if(in>maxn)
        {
            cnt++;
            maxn=in;
        }
        else if(in<minn)
        {
            cnt++;
            minn=in;
        }
    }
    cout<<cnt;
}
