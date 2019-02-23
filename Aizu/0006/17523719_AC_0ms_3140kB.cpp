/*************************************************************************
	> File Name: 23.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 21时32分48秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[100];
int main()
{
    scanf("%s",s);
    int len=strlen(s);
    for(int i=len-1;i>=0;i--)
    {
        cout<<s[i];
    }
    cout<<endl;
}
