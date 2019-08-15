/*************************************************************************
	> File Name: A.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月11日 星期六 15时41分12秒
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
int matrix[1010][1010];
bool dead[1010]={0};
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        char s[100000];
        cin>>s;
        for(int k=0; k<n; k++) matrix[i][k]=s[k]-'0';
    }
    int winner=m-1;
    int move=1;
    for(int i=0; i<n-1; i++)
    {
        if(dead[(winner+move)%n]==1)
        {
            move++;
            i--;
            continue;
        }
        if(matrix[(winner+move)%n][winner]==1)
        {
            //cout<<(winner+move)%n<<" "<<winner<<endl;
            winner=(winner+move)%n;
            move=-2;
            dead[winner]=1;
        }
        else{
            dead[(winner+move)%n]=1;
            //cout<<(winner)<<" "<<(winner+move)%n<<endl;
            move=1;
        }
    }
    cout<<winner+1;
}
