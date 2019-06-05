/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年06月01日 星期六 22时48分58秒
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
#define M 200050
int arr_a[M],arr_b[M];
int binary_s(int a[],int lenght_a,int tar)
{
    int left=0,right=lenght_a-1;
    int middle=(right+left)/2;
    while(left<=right)
    {
        if(a[middle]<tar) left=middle+1;
        else right=middle-1;
        middle=(right+left)/2;
    }
    return left;
}
int main()
{
    int n,m,ta,tb,k;
    cin>>n>>m>>ta>>tb>>k;
    fo(i,0,n-1,1) cin>>arr_a[i];
    fo(i,0,m-1,1) cin>>arr_b[i];
    if(k>=n)
    {
        cout<<"-1";
        return 0;
    }
    int ans=0;
    fo(i,0,k,1)
    {
        int temp=binary_s(arr_b,m,arr_a[i]+ta);
        //cout<<temp<<endl;
        if(m-temp<=k-i)
        {
            cout<<"-1";
            return 0;
        }
        ans=max(ans,arr_b[temp+k-i]+tb);
    }
    cout<<ans;
    return 0;
}
