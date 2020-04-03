/*************************************************************************
    > File Name: ans.cpp
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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int in1,in2;
        scanf("%d%d",&in1,&in2);
        if(in1%in2==0) printf("0\n");
        else printf("%d\n",in2-(in1%in2));
    }
}
