/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月24日 星期四 07时30分04秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char s[10000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(s,0,sizeof(0));
        scanf("%s",s);
        if(strlen(s)<=10) printf("%s\n",s);
        else{
            printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
        }
    }
}
