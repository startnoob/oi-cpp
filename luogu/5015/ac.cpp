/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<deque>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<set>
using namespace std;
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
char s[100];
int main()
{
    gets(s);
    int len=strlen(s),ans=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!=' '&&s[i]!='\n') ans++;
    }
    printf("%d",ans);
    return 0;
}
