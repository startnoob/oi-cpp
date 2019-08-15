/*************************************************************************
	> File Name: B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月11日 星期六 16时22分55秒
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
bool zs(int x)
{
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return 0;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<=n; j++)
        {
            for(int k=2; k<=n; k++)
            {
                if(i+j+k>n) break;
                else
                {
                    if(i+j+k==n&&zs(i)&&zs(j)&&zs(k))
                    {
                        printf("%d %d %d",i,j,k);
                        return 0;
                    }
                }
            }
        }
    }
}
