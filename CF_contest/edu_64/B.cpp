/*************************************************************************
	> File Name: B.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年05月01日 星期三 22时59分01秒
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
char ans[101];
char str[101];
int dis[101],len;
int answer_find=0;
char temp;
void dfs(int n)
{
    if(answer_find==1) return;
    if(n>=len)
    {
        answer_find=1;
        return;
    }
    fo(i,1,26,1)
    {
        if(dis[i]!=0&&i!=temp-'a'+2&&i!=temp-'a')
        {
            ans[n]=i-1+'a';
            //cout<<ans<<endl;
            char backup=temp;
            temp=ans[n];
            dis[i]--;
            dfs(n+1);
            if(answer_find==1) return;
            dis[i]++;
            temp=backup;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        answer_find=0;
        memset(ans,0,sizeof(ans));
        memset(ans,0,sizeof(dis));
        cin>>str;
        len=strlen(str);
        fo(i,0,len-1,1)
        {
            dis[str[i]-'a'+1]++;
        }
        //fo(i,1,26,1) cout<<dis[i]<<" ";
        //cout<<endl;
        bool st=true;
        fo(i,1,26,1)
        {
            if(dis[i-1]!=0||dis[i+1]!=0)
            {
                //printf("%d %d\n",str[i-1],str[i+1]);
                if(dis[i]>=float(float(len)/2.00000))
                {
                    //printf("%d %.2f\n",dis[i],float(float(len)/2.00000));
                    cout<<"No answer"<<endl;
                    st=false;
                    break;
                }
            }
        }
        if(!st) continue;
        else
        {
            //cout<<len<<endl;
            dfs(0);
            cout<<ans<<endl;
        }
    }
}
