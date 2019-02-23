/*************************************************************************
	> File Name: dfwdf.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年02月02日 星期六 08时44分09秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int power;
    int get;
}dragon[10000];
bool cmp(node x,node y)
{
    return x.power<y.power;
}
int main()
{
    int s,n;
    cin>>s>>n;
    for(int i=0;i<n;i++) cin>>dragon[i].power>>dragon[i].get;
    sort(dragon,dragon+n,cmp);
    for(int i=0;i<n;i++)
    {
        if(s>dragon[i].power) s+=dragon[i].get;
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
