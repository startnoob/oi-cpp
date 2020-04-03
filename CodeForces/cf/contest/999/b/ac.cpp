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
char s[1000];
int main()
{
    int t;
    cin>>t;
    scanf("%s",&s[1]);
    for(int i=t;i>=1;i--)
    {
        if(t%i==0)
        {
            for(int j=1;j<=t/i/2;j++)
            {
                swap(s[j],s[t/i-j+1]);
            }
        }
    }
    printf("%s",&s[1]);
}
