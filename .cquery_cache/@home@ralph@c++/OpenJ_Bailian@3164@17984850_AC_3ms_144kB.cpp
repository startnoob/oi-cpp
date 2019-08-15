#include<bits/stdc++.h>
using namespace std;
vector<int> ji;
vector<int> ou;
int main()
{
    int a;
    for(int i=0;i<10;i++)
    {
        cin>>a;
        if(a%2==0) ou.push_back(a);
        else ji.push_back(a);
    }
    sort(ji.begin(),ji.end());
    sort(ou.begin(),ou.end());
    for(int i=0;i<ji.size();i++) cout<<ji[i]<<" ";
    for(int i=0;i<ou.size();i++) cout<<ou[i]<<" ";
}