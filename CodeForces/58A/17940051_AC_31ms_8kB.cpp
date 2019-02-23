/*************************************************************************
	> File Name: 4.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月24日 星期四 08时07分35秒
 ************************************************************************/
#include<bits/stdc++.h>
using namespace std;
char s[1000];
int main()
{
    scanf("%s",s);
    char pan[10]={"hello"};
    int ci=0,len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]==pan[ci]) ci++;
    }
    if(ci==5) cout<<"YES";
    else cout<<"NO";
}
