/*************************************************************************
	> File Name: B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 22 Mar 2019 08:44:10 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int stk[1000000],tp;
char str[200000];
int main()
{
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')
        {
            stk[++tp]=i;
        }
        else{
            printf("%d %d\n",stk[tp--],i);
        }
    }
}

