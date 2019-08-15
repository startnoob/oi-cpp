/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月03日 星期五 19时05分08秒
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
int arr[2000];
int f[2000];
int main()
{
    int t,ans=1;
    cin>>t;
    fo(i,1,t,1) cin>>arr[i];
    f[1]=1;
    fo(i,2,t,1)
    {
        f[i]=1;
        fo(j,1,i-1,1)
        {
            if(arr[j]<arr[i]) f[i]=max(f[j]+1,f[i]);
        }
        ans=max(f[i],ans);
    }
    cout<<ans;
}
