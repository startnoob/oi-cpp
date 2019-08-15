/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月01日 星期三 22时22分13秒
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
//1 circle
//2 triangle
//3 square
int arr[1000];
int main()
{
    int t,cnt=0;
    cin>>t;
    fo(i,1,t,1)
    {
        cin>>arr[i];
        if(i!=1)
        {
            if((arr[i-1]==2&&arr[i]==3)||(arr[i-1]==3&&arr[i]==2))
            {
                cout<<"Infinite";
                return 0;
            }
            else{
                if(arr[i]==3) cnt+=4;
                if(arr[i]==1)
                {
                    if(arr[i-1]==2) cnt+=3;
                    if(arr[i-1]==3) cnt+=4;
                }
                if(arr[i]==2)
                {
                    if(arr[i-1]==1&&arr[i-2]==3) cnt+=2;
                    else cnt+=3;
                }
            }
        }
    }
    printf("Finite\n%d",cnt);
}
