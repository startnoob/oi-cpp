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
int main()
{
    int cta=0,ctb=0;
    int t;
    scanf("%d",&t);
    char temp;
    for(int i=1;i<=t;i++)
    {
        scanf("%c",&temp);
        if(temp=='L') cta++;
        else ctb++;
    }
    cout<<1+cta+ctb;
}
