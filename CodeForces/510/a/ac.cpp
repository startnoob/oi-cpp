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
#define int long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
char ans[100][100];
signed main()
{
    int n,m;
    bool st=1;
    cin>>n>>m;
    fo(i,1,n/2,1)
    {
        fo(j,1,m,1)
        {
            ans[2*i-1][j]='#';
        }//the first line

        if(st==1)
        {
            fo(j,1,m,1)
            {
                if(j!=m) ans[2*i][j]='.';
                else ans[2*i][j]='#';
            }
            st=0;
        }
        else
        {
            fo(j,1,m,1)
            {
                if(j!=1) ans[2*i][j]='.';
                else ans[2*i][1]='#';
            }
            st=1;
        }
    }
    fo(i,1,m,1) ans[n][i]='#';
    fo(i,1,n,1)
    {
        fo(j,1,m,1) cout<<ans[i][j];
        cout<<endl;
    }
}
