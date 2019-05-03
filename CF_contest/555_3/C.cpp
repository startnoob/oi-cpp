/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 26 Apr 2019 11:32:13 PM CST
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
int a[200005];
char step[200005];
int temp;
int main()
{
    int len;
    cin>>len;
    fo(i,1,len,1) cin>>a[i];
    int cnt=0,head=1,tail=len;
    while((a[head]>temp||a[tail]>temp)&&head<=tail)
    {
        int dis_head=a[head]-temp;
        int dis_tail=a[tail]-temp;
        if(dis_head>0&&(dis_head<=dis_tail||dis_tail<=0))
        {
            temp=a[head];
            step[cnt++]='L';
            head++;
            //cout<<head<<endl;
        }
        else if(dis_tail>0&&(dis_tail<dis_head||dis_head<=0))
        {
            temp=a[tail];
            step[cnt++]='R';
            tail--;
        }
        //cout<<dis_head<<" "<<dis_tail<<endl;
        //printf("%d %c\n",temp,step[cnt-1]);
    }
    printf("%d\n%s",cnt,step);
}
