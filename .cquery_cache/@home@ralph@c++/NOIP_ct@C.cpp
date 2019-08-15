/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月11日 星期六 16时32分07秒
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
ll arr[6000];
int main()
{
    int n,m;
    cin>>n>>m;
    ll begin,num=100000*5000+10000;
    for(int i=0;i<n;i++) cin>>arr[i];
    fo(i,0,n-1,1)
    {
        ll temp_num=arr[i];
        fo(j,1,n-2,1)
        {
            //cout<<temp_num+arr[(i+j)%n]<<endl;
            if(temp_num+arr[(i+j)%n]>m) break;
            else if(temp_num+arr[(i+j)%n]==m)
            {
                if(j+1<num)
                {
                    num=j+1;
                    begin=i;
                }
                break;
            }
            else temp_num+=arr[(i+j)%n];
        }
        //cout<<endl;
    }
    if(num>=100000*5000+5) cout<<"-1";  
    else cout<<begin+1<<" "<<num;
}
