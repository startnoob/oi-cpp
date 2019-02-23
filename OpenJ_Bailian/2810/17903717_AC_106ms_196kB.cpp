/*************************************************************************
	> File Name: wan.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年01月22日 星期二 17时36分14秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=2;i<=t;i++)
    {
        for(int j=2;j<=i;j++)
        {
            for(int k=2;k<=i;k++)
            {
                for(int l=2;l<=i;l++)
                {
                    if(i*i*i==j*j*j+k*k*k+l*l*l&&j<=k&&k<=l) printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
                }
            }
        }
    }
}
