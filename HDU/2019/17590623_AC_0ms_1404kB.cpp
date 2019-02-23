/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 22时44分12秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[100000];
int main()
{
    int n,m;
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0) break;
        else
        {
            s[n]=m;
            for(int i=0;i<n;i++)
            {
                cin>>s[i];
            }
            sort(s,s+n+1);
            for(int i=0;i<n;i++) cout<<s[i]<<" ";
            cout<<s[n]<<endl;
        }
    }
}
