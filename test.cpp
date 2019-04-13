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
int arr[10000];
int main()
{
    int n;
    scanf("%d",&n);
    fo(i,0,n-1,1)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    fo(i,0,n-1,1)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
