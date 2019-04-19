/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月01日 星期五 18时31分52秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
vector<int> s[100000];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==1) s[b].push_back(c);
        else
        {
            printf("%d\n",s[b][c-1]);
        }
    }
}
