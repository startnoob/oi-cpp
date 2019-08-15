/*************************************************************************
	> File Name: ./1055/ac.cpp
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
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
#define MOD 11
char arr[100];
int aft[100];
int main()
{
    scanf("%s",arr);
    int len=strlen(arr),last=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]!='-'){
            aft[last++]=arr[i]-'0';
        }
    }
    //for(int i=0;i<last;i++) cout<<aft[i];
    int cop=0;
    for(int i=0;i<last-1;i++){
        cop+=aft[i]*(i+1);
        cop%=MOD;
    }
    if(cop==aft[last-1]) printf("Right");
    else
    {
        aft[last-1]=cop,last=0;
        for(int i=0;i<len;i++){
            if(arr[i]!='-') cout<<aft[last++];
            else cout<<"-";
        }
    }
}

