/*************************************************************************
	> File Name: ./genorator-B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 05 Apr 2019 04:05:00 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
int main()
{
    freopen("1.in","w",stdout);
    srand(time(0));
    int n=rand()%10000,m=rand()%100000;
    int pos=rand()%n+1,tar=rand()%n+1;
    printf("%d %d %d %d\n",n,m,pos,tar);
    for(int i=1;i<=m;i++)
    {
        int lnode=rand()%n+1,rnode;
        while(1)
        {
            rnode=rand()%n+1;
            if(rnode!=lnode) break;
        }
        int val=rand()%10000+1;
        printf("%d %d %d\n",lnode,rnode,val);
    }
    return 0;
}
