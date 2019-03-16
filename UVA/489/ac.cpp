/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: Sun 17 Mar 2019 01:31:51 AM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int st[1000];
int cnt;
int main()
{
    while(1)
    {
        cnt=7;
        int round;
        cin>>round;
        if(round==-1) break;
        else
        {
            int pan[1000];
            for(int i=0;i<500;i++) pan[i]=1;
            memset(st,0,sizeof(st));
            char computer_thinking[100000],guess[100000];
            scanf("%s%s",computer_thinking,guess);
            int len1=strlen(computer_thinking),len2=strlen(guess);
            int tot=len1;
            for(int i=0; i<len1; i++)
            {
                st[computer_thinking[i]-'a']++;
                pan[computer_thinking[i]-'a']=0;
            }
            cout<<"Round "<<round<<endl;
            for(int i=0; i<len2; i++)
            {
                if(st[guess[i]-'a']!=0)
                {
                    tot-=st[guess[i]-'a'];
                    st[guess[i]-'a']=0;
                }
                else
                {
                    cnt-=pan[(guess[i]-'a')];
                    pan[guess[i]-'a']=0;
                }
                //printf("cnt=%d tot=%d\n",cnt,tot);
                if(tot==0)
                {
                    cnt=0;
                    cout<<"You win."<<endl;
                    break;
                }
                if(cnt==0)
                {
                    cout<<"You lose."<<endl;
                    break;
                }
            }
            if(cnt==0) continue;
            else cout<<"You chickened out."<<endl;
        }
    }
}
