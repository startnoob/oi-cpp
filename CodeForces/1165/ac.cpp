/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月24日 星期五 22时03分56秒
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
ll gcd(ll in1,ll in2)
{
    if(!in2) return in1;
    else return gcd(in2,in1%in2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll arr[400]= {0},minn=0x3f3f3f3f;
        int len;
        map<ll,bool> mark;
        scanf("%d",&len);
        for(int i=0; i<len; i++)
        {
            cin>>arr[i];
            if(minn>arr[i]) minn=arr[i];
            mark[arr[i]]=1;
        }
        fo(i,0,len-2,1)
        {
            ll ans=gcd(arr[i],arr[i+1]),temp=arr[i]/ans;
            arr[i+1]*=temp;
        }
        while(mark[arr[len-1]]) arr[len-1]*=minn;
        cout<<arr[len-1]<<endl;
    }
}
