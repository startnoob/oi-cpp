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
                //printf("%d %d %d\n",i,k,j);
            }
        }
    }
    //cout<<space[2][2][2]<<endl;
    fo(i,1,l,1)
    {
        int temp;
        cin>>temp;
        fo(j,1,temp,1)
        {
            fo(k,1,w,1)
            {
                space[l+1-i][k][j]++;
                //printf("%d %d %d\n",l+1-i,k,j);
            }
        }
    }
    //cout<<space[2][2][2]<<endl;
    fo(i,1,l,1)
    {
        fo(j,1,w,1)
        {
            int temp;
            cin>>temp;
            if(temp==1)
            {
                fo(k,1,h,1)
                {
                    space[l+1-i][j][k]++;
                    //printf("%d %d %d\n",j,l+1-i,k);
                }
            }
        }
    }
    //cout<<space[2][2][2]<<endl;
    for(int i=l;i>0;i--)
    {
        for(int j=1;j<=w;j++)
        {
            int cnt=0;
            fo(k,1,h,1)
            {
                //printf("space %d %d %d t=%d\n",i,j,k,space[i][j][k]);
                if(space[i][j][k]==3) cnt++;
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
}
