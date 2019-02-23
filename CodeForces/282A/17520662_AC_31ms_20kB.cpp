/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 18时17分03秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[10000];
int main()
{
    int t,cnt=0;
    cin>>t;
    while(t--)
    {
        memset(s,0,sizeof(s));
        scanf("%s",s);
        int len=strlen(s);
        if(s[1]=='-') cnt--;
        else cnt++;
    }
    cout<<cnt;
}
