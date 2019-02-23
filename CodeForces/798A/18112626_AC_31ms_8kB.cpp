/*************************************************************************
	> File Name: sada.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年02月02日 星期六 19时39分55秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[100];
int main()
{
    int diff=0;
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<ceil(len*1.0/2);i++)
    {
        if(s[i]!=s[len-i-1]) 
        {
            diff++;
        }
    }
    if(diff==1||(len%2==1&&diff==0)) cout<<"YES";
    else cout<<"NO";
}
