/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月15日 星期五 18时22分42秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
map<string,bool> f;
char in[10000];
char op[10];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%s",op,in);
        if(op[0]=='a')
        {
            f[in]=1;
        }
        else{
            if(f[in]==0) printf("no");
            else printf("yes");
            if(t!=0) printf("\n");
        }
    }
}
