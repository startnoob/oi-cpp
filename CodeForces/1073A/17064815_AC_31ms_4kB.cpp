/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年11月18日 星期日 09时45分33秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
char in[2000];
int main()
{
    int a;
    cin>>a;
    scanf("%s",in);
    int lena=strlen(in);
    bool st=false;
    for(int i=0;i<lena-1;i++)
    {
        if(in[i]!=in[i+1])
        {
            st=1;
            cout<<"YES"<<endl;
            cout<<in[i]<<in[i+1];
            break;
        }
    }
    if(st==0) cout<<"NO";
    return 0;
}
