/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月01日 星期五 15时39分03秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int month[15]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int week[10]={0,52,52,52,52,53,53,52};
int main()
{
    int in;
    char a[100],b[100];
    cin>>in>>a>>b;
    if(b[0]=='w') cout<<week[in];
    else
    {
        int cnt=0;
        for(int i=1;i<=12;i++) if(in<=month[i]) cnt++;
        cout<<cnt;
    }
}

