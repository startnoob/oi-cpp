/*************************************************************************
	> File Name: 1001.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年11月30日 星期五 22时20分56秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n%2==1) printf("%d",(n+1)/2*n);
        else printf("%d",n/2*(n+1));
        printf("\n\n");
    }
}
