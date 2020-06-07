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
int n;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        long long sum=0;
        for(int i=1;i<=n;i++)
        {
            int temp;
            cin>>temp;
            //cout<<"d"<<temp<<endl;
            if(temp<=2048) sum+=temp;
        }
        //cout<<sum<<endl;
        if(sum>=2048) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

