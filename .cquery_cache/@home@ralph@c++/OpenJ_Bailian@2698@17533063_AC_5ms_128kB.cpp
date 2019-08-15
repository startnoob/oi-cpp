#include<bits/stdc++.h>
using namespace std;
bool l[800],add[2000],sub[2000],board[9][9];
int tot;
int n=8;
void s(int k);
int main()
{
    s(1);
    return 0;
}
void s(int k)
{
    if(k>n){
    	tot++;
        cout<<"No. "<<tot<<endl;
        for(int i=1;i<=8;i++)
        {
        	for(int j=1;j<=8;j++) cout<<board[i][j]<<" ";
        	cout<<endl;
		}
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(l[i]==0&&add[i+k]==0&&sub[i-k+10]==0)
        {
            board[i][k]=1;
			l[i]=1;
            add[i+k]=1;
            sub[i-k+10]=1;
            s(k+1);
            l[i]=0;
            add[i+k]=0;
            sub[i-k+10]=0;
            board[i][k]=0;
        }
    }
}
