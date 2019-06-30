/*************************************************************************
	> File Name: genorator.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 05 Apr 2019 02:05:09 PM CST
 ************************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define M 500000
int a[15];
int main()
{
    a[1]=1,a[2]=1,a[5]=1,a[6]=1,a[8]=1,a[11]=1,a[12]=2;
    srand(time(0));
    int n=rand()%12+1;
    while(!a[n])
    {
        n=rand()%12+1;
    }
    cout<<n;
}
