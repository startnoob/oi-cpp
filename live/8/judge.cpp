/*************************************************************************
	> File Name: judge.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 19 Apr 2019 09:42:37 PM CST
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
int main()
{
    srand(time(0));
    while(1)
    {
        freopen("1.in","w",stdin);
        int a=rand()%150+1,b=rand()%150+1,c=rand()%150+1;
        printf("%d %d %d",a,b,c);
        fclose(stdin);
        system("./c_ac<1.in>ac.out");
        system("./C<1.in>test.out");
        if(system("diff ac.out test.out")) break;
        else cout<<"ac"<<endl;
    }
}
