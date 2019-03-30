/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Thu 28 Mar 2019 07:52:41 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
int main()
{
    int t,cnt=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int in;
        scanf("%1d",&in);
        if(in%2==0) cnt+=i;
    }
    cout<<cnt;
}
