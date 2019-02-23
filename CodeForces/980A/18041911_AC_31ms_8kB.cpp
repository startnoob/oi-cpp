/*************************************************************************
    > File Name: 980a.cpp
    > Author: ralph
    > Mail: 1694487365@qq.com
    > Created Time: 2019年01月29日 星期二 12时35分07秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int line=0,ball=0;
    char s[10000];
    cin>>s;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]=='-') line++;
        else ball++;
    }
    if(ball==0||line%ball==0||ball==len) cout<<"YES";
    else cout<<"NO";
}
