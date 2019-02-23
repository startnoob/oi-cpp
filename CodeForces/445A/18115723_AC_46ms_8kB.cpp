/*************************************************************************
	> File Name: adfasf.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年02月02日 星期六 21时53分16秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<m; j++)
            {
                char in;
                cin>>in;
                if(in=='.')
                {
                    if(j%2==0) cout<<"B";
                    else cout<<"W";
                }
                else cout<<"-";
            }
        }
        else
        {
            for(int j=0; j<m; j++)
            {
                char in;
                cin>>in;
                if(in=='.')
                {
                    if(j%2==0) cout<<"W";
                    else cout<<"B";
                }
                else cout<<"-";
            }
        }
        cout<<endl;
    }
}