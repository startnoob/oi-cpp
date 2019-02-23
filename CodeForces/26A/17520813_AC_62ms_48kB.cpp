/*************************************************************************
	> File Name: 4.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 18时27分08秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[10000];
int prime(int x)
{
    int num1=0;
    for(int i=2; i<=x; i++)
    {
        int st=0;
        for(int j=1; s[j]<i; j++)
        {
            if(i%s[j]==0) st++;
            if(st>2) break;
        }
        if(st==2) num1++;
    }
    return num1;
}
int main()
{
    int num=1;
    for(int i=2; i<=3000; i++)
    {
        bool st=true;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                st=false;
                break;
            }
        }
        if(st==true)
        {
            s[num]=i;
            num++;
        }
    }
    int n;
    cin>>n;
    cout<<prime(n);
}
