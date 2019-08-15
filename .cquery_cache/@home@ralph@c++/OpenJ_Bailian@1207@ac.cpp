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
int judge(int input)
{
    int val=0;
    while(input!=1)
    {
        if(input%2) input=input*3+1;
        else input/=2;
        val++;
    }
    return val;
}
int main()
{
    int le,ri;
    while(scanf("%d",&le)!=EOF)
    {
        scanf("%d",&ri);
        printf("%d %d ",le,ri);
        if(max(le,ri)==le) swap(le,ri);
        int max_name,max_cnt=0;
        for(int i=le; i<=ri; i++)
        {
            int temp=judge(i);
            if(temp>max_cnt)
            {
                max_name=i;
                max_cnt=temp;
            }
        }
        printf("%d\n",max_cnt+1);
    }
}
