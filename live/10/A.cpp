/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月10日 星期五 18时39分10秒
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
int c[1000],v[1000];
int f[1000][1010];
int main()
{
    int val,n;
    cin>>val>>n;
    int ans=0;
    fo(i,1,n,1)
    {
        cin>>c[i]>>v[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=val;j++) f[i][j]=-1;
    }
    f[0][0]=0;
    fo(i,1,n,1)
    {
        fo(j,0,val,1)
        {
            f[i][j]=f[i-1][j];
            if(j>=c[i]&&f[i-1][j-c[i]]!=-1) f[i][j]=max(f[i][j],f[i-1][j-c[i]]+v[i]);
            //cout<<f[i][j]<<endl;
            ans=max(ans,f[i][j]);
        }
    }
    cout<<ans;
}
