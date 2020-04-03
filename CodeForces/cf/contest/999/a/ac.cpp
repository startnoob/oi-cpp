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
int arr[200];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    int left=n,right=1,st=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>k)
        {
            left=i;
            st=1;
            break;
        }
    }
    for(int i=n;i>=1;i--)
    {
        if(arr[i]>k)
        {
            right=i;
            break;
        }
    }
    if(n==1&&st==1) cout<<"0";
    else if(right==1&&left==n) cout<<n;
    else cout<<n-(right-left+1);
}
