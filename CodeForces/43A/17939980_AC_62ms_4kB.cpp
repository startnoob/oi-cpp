/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月24日 星期四 07时39分48秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char team1[20],team2[20];
int val1=1,val2;
int main()
{
    int t;
    cin>>t;
    char unknow[20]= {0};
    scanf("%s",team1);
    for(int i=2; i<=t; i++)
    {
        scanf("%s",unknow);
        if(strcmp(unknow,team1)==0) val1++;
        else
        {
            strcpy(team2,unknow);
            val2++;
        }
    }
    if(val1>val2) printf("%s",team1);
    else printf("%s",team2);
}
