/*************************************************************************
	> File Name: 1.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 29 Mar 2019 06:13:46 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
queue<int> s;
struct node
{
    int lson,rson;
}arr[M];
void bfs(int root);
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int iroot,ilson,irson;
        scanf("%d%d%d",&iroot,&ilson,&irson);
        arr[iroot].lson=ilson,arr[iroot].rson=irson;
    }
    s.push(1);
    bfs(1);
}
void bfs(int root)
{
    printf("%d ",root);
    if(arr[root].lson!=0) s.push(arr[root].lson);
    if(arr[root].rson!=0) s.push(arr[root].rson);
    s.pop();
    if(s.empty()==false) bfs(s.front());
}
