#include <bits/stdc++.h>
 using namespace std;
 const int N = 155;
 
struct node {
    int a[3];//表示每杯酒中的酒量
    int step;
};
bool vis[N][N][N]; //标记数组
node q[N*N*N];
int A[3];
 
// 将第i杯酒倒入第j杯酒 
// 返回新的状态
node dao(node u, int i, int j) {
    node tmp = u;
    tmp.step ++;
    //第i杯酒倒入第j杯，不会超过第j杯的总容量
    tmp.a[j] = min(A[j], u.a[j] + u.a[i]);
    tmp.a[i] = u.a[i] + u.a[j] - tmp.a[j];
    return tmp;
}
 
void bfs() {
    //标记初始状态
    vis[A[0]][0][0] = true;
    node tmp;
    tmp.a[0] = A[0]; tmp.a[1] = 0; tmp.a[2] = 0; tmp.step = 0;
    int head = 0, tail = 0;
    q[tail++] = tmp;//初始状态放入队列
 
    while (head < tail) {
        node u = q[head++];
        //判断有没有相同酒量的两杯酒，且另一杯是空的
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)if(i != j) {
                if(u.a[i] == 0 && u.a[j] == A[0]/2) {
                    cout << u.step;
                    return ;
                }
            }
        }
        //枚举第i杯往第j杯酒倒
        //下面两个for循环就相当于广搜的方向
        //所谓的方向 被扩展了  更加广义的方向
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) if(i != j) {
                node tmp = dao(u, i, j);
                //判断是否到达一个新的状态
                if(!vis[tmp.a[0]][tmp.a[1]][tmp.a[2]]) {
                    vis[tmp.a[0]][tmp.a[1]][tmp.a[2]] = true;
                    q[tail++] = tmp;
                }
            }
        }
    }
    cout << "NO" ;
}
 
int main() {
    cin >> A[0] >> A[1] >> A[2];
    if(A[0] % 2 == 1) {
        cout << "NO" ;
    } else
        bfs();
    return 0;
} 

