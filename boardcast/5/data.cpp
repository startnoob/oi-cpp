/*************************************************************************
	> File Name: data.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 29 Mar 2019 11:43:04 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define M 500000
bool zz=true,aa=true;
char r()
{
    int st=rand()%4+1;
    if(st==1) return '#';
    if(st==2) return '.';
    if(st==3&&zz==true)
    {
        zz=false;
        return 'S';
    }
    if(st==4&&aa==true)
    {
        aa=false;
        return 'T';
    }
    if((st==3&&zz==false)||(st==4&&aa==false))
    {
        int st=rand()%2+1;
        if(st==1) return '#';
        else return '.';
    }

}
int main()
{
    srand(time(0));
    int n=rand()%10+1,m=rand()%100+1;
    cout<<n<<" "<<m<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<r();
        }
        cout<<endl;
    }
}
