/*************************************************************************
	> File Name: B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Sat 13 Apr 2019 10:37:31 PM CST
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
int space[110][110][110];//x,y,z
int main()
{
    int l,w,h;
    cin>>l>>w>>h;
    fo(i,1,w,1)
    {
        int temp;
        cin>>temp;
        fo(j,1,temp,1)
        {
            fo(k,1,l,1)
            {
                space[k][i][j]++;
            }
        }
    }
    fo(i,1,l,1)
    {
        int temp;
        cin>>temp;
        fo(j,1,temp,1)
        {
            fo(k,1,w,1) space[i][k][j]++;
        }
    }
    fo(i,1,l,1)
    {
        fo(j,1,w,1)
        {
            int temp;
            cin>>temp;
            if(temp)
            {
                fo(k,1,h,1) space[i][j][k]++;
            }
        }
    }
    fo(i,1,l,1)
    {
        fo(j,1,w,1)
        {
            int cnt=0;
            fo(k,1,l,1)
            {
                if(space[i][j][k]==3) cnt++;
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
}
