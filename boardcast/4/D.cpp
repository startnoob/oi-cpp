/*************************************************************************
	> File Name: sdasdf.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 22 Mar 2019 08:19:52 PM CST
 ************************************************************************/
#define M 500005
#include<bits/stdc++.h>
using namespace std;
char str[M];
int R[M];
int stk[M],tp;
int main()
{
    scanf("%s",str+1);
    int n=strlen(str+1);
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(str[i]=='(')
        {
            stk[++tp]=i;
        }
        else
        {
            if(tp==0) continue;
            int x=stk[tp--];
            R[i]=i-x+1+R[x-1];
            ans=max(ans,R[i]);
        }
    }
    printf("%d",ans);
    return 0;
}

