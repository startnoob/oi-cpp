/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月29日 星期六 20时00分38秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int check(int x)
{
    int cnt=0;
    while(x)
    {
        cnt+=pow(x%10,3);
        x/=10;
    }
    return cnt;
}
int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        bool st=false;
        int s[100000]= {0},now=1;
        for(int i=m; i<=n; i++)
        {
            if(check(i)==i)
            {
                s[now]=i;
                now++;
                st=true;
            }
        }
        if(st==false) cout<<"no"<<endl;
        else
        {
            for(int i=1; i<now-1; i++)
            {
                cout<<s[i]<<" ";
            }
            cout<<s[now-1]<<endl;
        }
    }
}
