/*************************************************************************
	> File Name: 3.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 29 Mar 2019 07:43:58 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 5000000
struct node
{
    char mp[3][3];
    int step;
};
node Q[370006],now,nxt;
int rx[]= {0,1};
int ry[]= {1,0};
bool mark[M];
int Mark(node x)
{
    int num=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            num=num*10+(x.mp[i][j]-'0');
        }
    }
    //printf("num=%d\n",num);
    if(num==12345678) return 2;
    if(mark[num%1000007]) return 0;
    mark[num%1000007]=1;
    return 1;

}
int bfs()
{
    int head=0,tail=0;
    Q[tail++]=now;
    if(Mark(now)==2) return 0;
    while(head<tail)
    {
        now=Q[head++];
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<2; k++)
                {
                    if(i+rx[k]<3&&j+ry[k]<3)
                    {
                        nxt=now;
                        nxt.step++;
                        swap(nxt.mp[i][j],nxt.mp[i+rx[k]][j+ry[k]]);
                        int k=Mark(nxt);
                        if(k==2) return nxt.step;
                        if(k==0) continue;
                        Q[tail++]=nxt;
                    }
                }
            }
        }
    }
}
int main()
{
    char tmp[10];
    for(int i=0; i<3; i++)
    {
        scanf("%s",tmp);
        for(int j=0; j<3; j++)
        {
            now.mp[i][j]=tmp[j];
        }
    }
    now.step=0;
    cout<<bfs();
    return 0;
}
