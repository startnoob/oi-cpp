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
int arr[100050];
int main()
{
    int n,ans=0;
    cin>>n;
    fo(i,0,n-1,1) 
    {
        cin>>arr[i];
        if(arr[i]==i) ans++;
    }
    if(ans==n)
    {
        cout<<n;
        return 0;
    }
    fo(i,0,n-1,1)
    {
        if(i==arr[arr[i]]&&i!=arr[i])
        {
            cout<<ans+2;
            return 0;
        }
    }
    cout<<ans+1;
}
