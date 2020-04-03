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
    int t,cnt=0;
    scanf("%d",&t);
    while(t!=1)
    {
        if(t%2==0) t/=2;
        else t=(3*t+1)/2;
        cnt++;
    }
    printf("%d",cnt);
}
