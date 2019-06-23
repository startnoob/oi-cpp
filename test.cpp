/*************************************************************************
	> File Name: test.cpp
	> Author:
	> Mail:
	> Created Time: Sat Apr 13 18:53:58 2019
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
#define M 500000
#define ll long long
#define pb push_back
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
using namespace std;
struct node
{
    int m;
    double h;
} line[50];
bool cmp(node x,node y)
{
    if(x.m==y.m&&x.m==0) return x.h<y.h;
    if(x.m==y.m&&x.m==1) return x.h>y.h;
    return x.m<y.m;
}
int main()
{
    int n;
    scanf("%d",&n);
    fo(i,0,n-1,1)
    {
        char te[10];
        cin>>te;
        if(te[0]=='m') line[i].m=0;
        else line[i].m=1;
        cin>>line[i].h;
    }
    sort(line,line+n,cmp);
    fo(i,0,n-1,1) printf("%.2f ",line[i].h);
    return 0;
}
