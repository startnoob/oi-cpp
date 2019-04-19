/*************************************************************************
	> File Name: genorator.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 05 Apr 2019 02:05:09 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
int main()
{
    int n,pos;
    srand(time(0));
    n=rand()%200;
    pos=rand()%n+1;
    int tar=rand()%n+1;
    printf("%d %d %d\n",n,pos,tar);
    for(int i=1;i<=n;i++) cout<<rand()%40+1<<" ";
}
