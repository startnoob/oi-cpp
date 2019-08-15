/*************************************************************************
	> File Name: srfa.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 22 Mar 2019 06:35:42 PM CST
 ************************************************************************/

#define M 500005
#include<bits/stdc++.h>
using namespace std;
int S[M][2];
stack<int> str[M];
int in[M];
queue<int> Q;
int main()
{
    int n,k,m;
    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d",&S[i][0],&S[i][1]);
        if(in[S[i][1]]==0) Q.push(S[i][1]);
        in[S[i][1]]++;
    }
    for(int i=n; i>=1; i--) str[S[i][1]].push(S[i][0]);
    scanf("%d",&m);
    int op,a,b;
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&op);
        if(op==1)
        {
            scanf("%d%d",&a,&b);
            if(in[b]==0) Q.push(b);
            str[b].push(a);
            in[b]++;
        }
        else
        {
            int p=Q.front();
            printf("%d\n",str[p].top());
            str[p].pop();
            in[p]--;
            if(in[p]==0) Q.pop();
        }
    }
}

