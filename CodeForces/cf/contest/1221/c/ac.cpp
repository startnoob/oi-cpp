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
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int coder,math,nos;
        scanf("%d,%d,%d",&coder,&math,&nos);
        int cnt=min(coder,min(math,nos));
        coder-=cnt; math-=cnt;  nos-=cnt;
        int temp;
        if(math>coder)
        {
            cnt+=math/2;
            coder-=

        }


    }
}
