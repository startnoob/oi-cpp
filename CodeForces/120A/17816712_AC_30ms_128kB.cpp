/*************************************************************************
	> File Name: 12.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月19日 星期六 15时51分34秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[1000];
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    scanf("%s%d",s,&n);
    if(strcmp(s,"front")==0)
    {
        if(n==1) cout<<"L";
        else cout<<"R";
    }
    else
    {
        if(n==1) cout<<"R";
        else cout<<"L";
    }
}
