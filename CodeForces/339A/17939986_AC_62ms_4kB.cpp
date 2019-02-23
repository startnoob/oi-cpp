/*************************************************************************
	> File Name: 3.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月24日 星期四 07时48分41秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int st[500];
char in[500];
int main()
{
    scanf("%s",in);
    int len=strlen(in);
    sort(in,in+len);
    for(int i=(len-1)/2;i<len-1;i++)
    {
        printf("%c+",in[i]);
    }
    printf("%c",in[len-1]);
}
