/*************************************************************************
    > File Name: angle.cpp
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
double l_x[1000],l_y[1000];
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) cin>>l_x[i]>>l_y[i];
    l_x[t+1]=l_x[1],l_y[t+1]=l_y[1];
    double sum=0;
    for(int i=1;i<=t;i++)
    {
        sum+=l_x[i]*l_y[i+1]-l_x[i+1]*l_y[i];
    }
   if(sum<0) sum=0-sum;
   cout<<0.5*sum;
}
