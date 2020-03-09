/*************************************************************************
	> File Name: sudoku.cpp
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
int board[12][12],cnt;
int part[4][4]= {{0,0,0,0},{0,1,2,3},{0,4,5,6},{0,7,8,9}};
struct node
{
    int b_x,b_y;
} basic[10];
void init()
{
    for(int i=1; i<=10; i++) board[i][10]=999;
    basic[1].b_x=1,basic[1].b_y=1;
    basic[2].b_x=1,basic[2].b_y=4;
    basic[3].b_x=1,basic[3].b_y=7;
    basic[4].b_x=4,basic[4].b_y=1;
    basic[5].b_x=4,basic[5].b_y=4;
    basic[6].b_x=4,basic[6].b_y=7;
    basic[7].b_x=7,basic[7].b_y=1;
    basic[8].b_x=7,basic[8].b_y=4;
    basic[9].b_x=7,basic[9].b_y=7;
}
void solve(int tar_x,int tar_y);
void show();
int judge(int unknown_x,int unknown_y)
{
    int ans_x=(unknown_x+2)/3,ans_y=(unknown_y+2)/3;
    return part[ans_x][ans_y];
}
int main()
{
    cout<<part[1][1]<<endl;
    init();
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            scanf("%d",&board[i][j]);
            if(board[i][j]!=0) cnt++;
        }
    }
    solve(1,1);
}
void solve(int tar_x,int tar_y)
{
    if(cnt==81)
    {
        show();
        return;
    }
    if(board[tar_x][tar_y]!=0)//位置修正
    {
        if(tar_y==10) solve(tar_x+1,1);
        else solve(tar_x,tar_y+1);
    }
    //printf("searching in %d %d\n",tar_x,tar_y);
    for(int i=1; i<=9; i++) //i为要猜的数
    {
        //printf("guessing %d\n",i);
        bool st_line=1,st_column=1,st_cell=1;
        for(int j=1; j<=9; j++)
        {
            if(board[tar_x][j]==i)//行搜索
            {
                st_line=0;
                break;
            }
            if(board[j][tar_y]==i)//列搜索
            {
                st_column=0;
                break;
            }
        }
        int bs_x=basic[judge(tar_x,tar_y)].b_x,bs_y=basic[judge(tar_x, tar_y)].b_y;
        //printf("cell start point:%d %d\n",bs_x,bs_y);
        for(int m=bs_x; m<bs_x+3; m++)
        {
            for(int n=bs_y; n<bs_y+3; n++)
            {
                if(board[m][n]==i)
                {
                    st_cell=0;
                    break;
                }
            }
            if(st_cell==0) break;
        }
        printf("search result for %d:line(%d),column(%d),cell(%d)\n",i,st_line,st_column,st_cell);
        if(st_cell&&st_line&&st_column)
        {
            cnt++;
            board[tar_x][tar_y]=i;
            show();
            solve(tar_x,tar_y+1);
            board[tar_x][tar_y]=0;
            cnt--;
        }
    }
}
void show()
{
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            cout<<board[i][j]<<" ";
        }
        printf("\n");
    }
    printf("\n");
}
