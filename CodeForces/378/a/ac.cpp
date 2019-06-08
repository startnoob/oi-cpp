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
    int a,b;
    cin>>a>>b;
    int aw=0,dr=0,bw=0;
    fo(i,1,6,1)
    {
        if(abs(a-i)<abs(b-i)) aw++;
        else if(abs(a-i)==abs(b-i)) dr++;
        else bw++;
    }
    printf("%d %d %d",aw,dr,bw);
}
