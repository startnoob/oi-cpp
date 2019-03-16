/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月08日 星期五 16时02分58秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(a[0]%2&&a[n-1]%2&&n%2) printf("Yes");
    else printf("No");
}
