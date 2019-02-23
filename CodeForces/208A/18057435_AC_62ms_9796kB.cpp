/*************************************************************************
	> File Name: wub.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月30日 星期三 10时37分49秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char in[10000000];
int main()
{
    scanf("%s",in);
    int len=strlen(in);
    for(int i=0;i<len-2;i++)
    {
        if(in[i]=='W'&&in[i+1]=='U'&&in[i+2]=='B')
        {
            in[i]=in[i+1]=in[i+2]=' ';
        }
    }
    for(int i=0;i<len;i++)
    {
        if(in[i]!=' ')
        {
            cout<<in[i];
            if(in[i+1]==' ') cout<<" ";
        }
    }
}
