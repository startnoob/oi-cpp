/*************************************************************************
	> File Name: huarongdao.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com

 ************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int board[10][10];
char s[10000000];
void show()
{
    system("clear");
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<'\n';
    }
}
int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            cin>>board[i][j];
        }
    }
    show();
    int tail=0;
    while(1)
    {
        int tx,ty;
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=4;j++)
            {
                if(board[i][j]==0)
                {
                    tx=i,ty=j;
                }
            }
        }
        char temp;
        cin>>temp;
        if(temp=='z') break;
        else
        {
            if(temp=='w') swap(board[tx+1][ty],board[tx][ty]);
            if(temp=='s') swap(board[tx-1][ty],board[tx][ty]);
            if(temp=='a') swap(board[tx][ty+1],board[tx][ty]);
            if(temp=='d') swap(board[tx][ty-1],board[tx][ty]);
            s[tail++]=temp;
        }
        show();
    }
    cout<<s;
}
