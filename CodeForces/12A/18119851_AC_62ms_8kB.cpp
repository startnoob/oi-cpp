/*************************************************************************
        > File Name: faf.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2019年02月03日 星期日 16时27分53秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char a[5][5];
int main()
{
    for(int i=1;i<=3;i++) for(int j=1;j<=3;j++) cin>>a[i][j];
    if(a[1][1]==a[3][3]&&a[1][2]==a[3][2]&&a[1][3]==a[3][1]&&a[2][1]==a[2][3]) cout<<"YES";
    else cout<<"NO";
}
