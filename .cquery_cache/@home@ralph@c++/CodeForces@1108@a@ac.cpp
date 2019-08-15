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
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
int main()
{
    int wyq;
    cin>>wyq;
    while(wyq--)
    {
        int arr[5];
        fo(i,1,4,1) scanf("%d",&arr[i]);
        if(arr[1]<=arr[3]) printf("%d %d\n",arr[1],arr[4]);
        else printf("%d %d\n",arr[2],arr[3]);
    }
}
