#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_people=0,val=0;
    char s[1000000];
    while(gets(s))
    {
        if(s[0]=='+') num_people++;
        else if(s[0]=='-') num_people--;
        else
        {
            int len=strlen(s);
            for(int i=0;i<len;i++)
            {
                if(s[i]==':')
                {
                    val+=(len-1-i)*num_people;
                    break;
                }
            }
        }
    }
    cout<<val;
}