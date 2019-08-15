/*************************************************************************
	> File Name: C.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Fri 19 Apr 2019 06:54:28 PM CST
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
queue<int> bottle[4],step;
int val[4];
int mark[200][200][200];
int main()
{
    //freopen("1.out","w",stdout);
    cin>>val[1]>>val[2]>>val[3];
    if(val[1]%2)
    {
        cout<<"NO";
        return 0;
    }
    bottle[1].push(val[1]);
    bottle[2].push(0);
    bottle[3].push(0);
    step.push(0);
    mark[val[1]][0][0]=1;
    while(!bottle[1].empty())
    {
        int now[4]= {0,bottle[1].front(),bottle[2].front(),bottle[3].front()};
        if((now[1]==now[2]&&now[1]+now[2]==val[1])||(now[1]+now[3]==val[1]&&now[1]==now[3])||(now[2]+now[3]==val[1]&&now[2]==now[3]))
        {
            cout<<step.front();
            return 0;
        }
        for(int i=1; i<=3; i++)
        {
            fo(j,1,3,1)
            {
                if(j!=i)
                {
                    int next[4]= {0};
                    if(now[i]>=val[j]-now[j])
                    {
                        //printf("i=%d j=%d\n",i,j);
                        next[i]=(now[i]-(val[j]-now[j]));
                        next[j]=(val[j]);
                        next[6-i-j]=(now[6-i-j]);  
                        //fo(z,1,3,1) printf("z=%d,data=%d\n",z,next[z]);
                        if(mark[next[1]][next[2]][next[3]]==0)
                        {
                            fo(k,1,3,1)
                            {
                                bottle[k].push(next[k]);
                            }
                            step.push(step.front()+1);
                            mark[next[1]][next[2]][next[3]]=1;
                        }
                    }
                    else
                    {
                        next[i]=0;
                        next[j]=(now[j]+now[i]);
                        next[6-i-j]=(now[6-i-j]);
                        if(mark[next[1]][next[2]][next[3]]==0)
                        {
                            fo(k,1,3,1)
                            {
                                bottle[k].push(next[k]);
                            }
                            step.push(step.front()+1);
                            mark[next[1]][next[2]][next[3]]=1;
                        }
                    }
                }
            }
        }
        //printf("%d %d %d st=%d\n",bottle[1].front(),bottle[2].front(),bottle[3].front(),step.front());
        fo(i,1,3,1) bottle[i].pop();
        step.pop();
    }
    cout<<"NO";
}

