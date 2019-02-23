#include<bits/stdc++.h>
using namespace std;
int fx[5]= {0,0,1,-1};
int fy[5]= {1,-1,0,0};
char board[40][40];
queue<int>a[3];
int cnt;
void bfs(int s1,int s2) {
	a[1].push(s1);
	a[2].push(s2);
	while(!a[1].empty()) {
		for(int i=0; i<=3; i++) {
			if(board[a[1].front()+fx[i]][a[2].front()+fy[i]]=='.') {
				cnt++;
				a[1].push(a[1].front()+fx[i]);
				a[2].push(a[2].front()+fy[i]);
				board[a[1].front()+fx[i]][a[2].front()+fy[i]]='#';
			}
		}
//		for(int i=0; i<=40; i++) {
//			for(int j=0; j<=40; j++) cout<<board[i][j];
//			cout<<endl;
//		}
		a[1].pop();
		a[2].pop();
	}
}
int main() {
	int n,m;
	cin>>n>>m;
	while(n!=0&&m!=0) {
		int bx,by;
		memset(board,0,sizeof(board));
		cnt=0;
		for(int i=0; i<=39; i++) {
			for(int j=0; j<=39; j++) board[i][j]='#';
		}
		
		for(int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				cin>>board[i][j];
				if(board[i][j]=='@') {
					bx=i;
					by=j;
				}
			}
		}
		bfs(bx,by);
		cout<<cnt+1<<endl;
		cin>>n>>m;
	}
	return 0;
}