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
    while(t--){
        double l,cnt;
        scanf("%lf%lf",&l,&cnt);
        long long raw=floor((sqrt(1+8*cnt)-1)/2);
        long long pos=cnt-(raw)*(1+raw)/2; 
        if(pos==0) pos=raw;
        else raw++;
        //printf("%d %d\n",raw,pos);
        for(int i=1;i<=l;i++)
        {
            if(i==l-raw||i==l-pos+1) printf("b");
            else printf("a");
        }
        printf("\n");
    }
}
