/*************************************************************************
        > File Name: 2135.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2018年12月18日 星期二 19时42分06秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char board[30][30];
int main()
{
    int n;
    while(cin>>n)
    {
//        cout<<n<<endl;
        memset(board,0,sizeof(board));
        int times;
        cin>>times;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin>>board[i][j];
            }
        }
        if(times<0)
        {
            while(times<0) times+=4;
        }
//        cout<<times<<endl;
        times%=4;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(times==0) cout<<board[i][j];
                if(times==1) cout<<board[n-j+1][i];
                if(times==2) cout<<board[n-i+1][n-j+1];
                if(times==3) cout<<board[j][n-i+1];
            }
            cout<<endl;
        }
    }
}

