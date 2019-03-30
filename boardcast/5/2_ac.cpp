#include<bits/stdc++.h>
using namespace std;
int sx,sy,tx,ty;
#define inf 0x3f3f3f3f
typedef pair<int,int>P;
char maze[1005][1005];
int n,m,flag=0;
int d[1005][1005];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
void bfs(){
    queue<P>que;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            d[i][j]=inf;
        }
    }
    que.push(P(sx,sy));
    d[sx][sy]=0;
    while(que.size()){
        P p=que.front();
        que.pop();
        int i;
        for(i=0;i<4;i++){
            int nx=p.first+dx[i];
            int ny=p.second+dy[i];
            if(nx>=0&&nx<n&&ny<m&&ny>=0&&maze[nx][ny]!='#'&&d[nx][ny]==inf){
                que.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
                if(nx==tx&&ny==ty) {
                    flag=1;
                    break;
                }
            }
        }
        if(i!=4) break;
    }
}
int main()
{
    int i,j;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>maze[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(maze[i][j]=='S'){
                sx=i;
                sy=j;
            }
            if(maze[i][j]=='T'){
                tx=i;
                ty=j;
            }
        }
    }
    bfs();
    if(flag)
        cout<<d[tx][ty]<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}

