/*************************************************************************
	> File Name: B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 26 Apr 2019 11:03:04 PM CST
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
char s[200005];
int f[100];
int main()
{
    int len;
    cin>>len;
    scanf("%s",s);
    fo(i,1,9,1) cin>>f[i];
    fo(i,0,len-1,1)
    {
        if(f[int(s[i]-'0')]>int(s[i]-'0'))
        {
            fo(j,i,len-1,1)
            {
                if(f[s[j]-'0']<s[j]-'0') break;
                s[j]=f[s[j]-'0']+'0';
            }
            break;
        }
    }
    printf("%s",s);
}
