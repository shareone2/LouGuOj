#include <iostream>
#include <cstdio>
#include <queue>

#define MAXD 100010
#define MAX_MAX 200010
#define INF 2147483647

using namespace std;

struct edge { int to, cost, next; }; //数据域：to，cost。next域: next。 
edge G[MAX_MAX]; //开个这个数据类型的数组用来存储边。 
struct P{//为了优先队列进行排序 
    int dis, point; 
    P() {
    	
	}
    P(int dis, int point) {
    	this->dis = dis;
    	this->point = point;
	}
    bool operator <( const P& x ) const { //重载小于号 
	    return dis > x.dis;
	}
};
/* bool operator <(const P& a, const P& b) {
	return a.dis > b.dis;
} */
priority_queue <P> que; //默认的stl优先队列，重载的是小于号 
int V, E, S, d[MAXD], head[MAXD], num_edge; //点数，边数，源点，存储每个点到源点的距离，表头:一个表头的起点，累加器：表示边的编号。 

int read();
void add_edge(int from, int to, int cost);
void dijsktra();

int main() {
    V = read(), E = read(), S = read(); 
    for (int i = 1; i <= E; i++) {
        int from = read(), to = read(), dis = read();
        add_edge(from, to, dis);
    }
    dijsktra();
    for (int i = 1; i <= V; i++) {
        if (i != 1) printf(" ");
        printf("%d", d[i]);
    }
    printf("\n");
    return 0;
}
int read() {
    int x = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') ch = getchar();
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x;
}

void add_edge(int from, int to, int cost) { 
    G[++num_edge].to = to; //终点 
    G[num_edge].cost = cost; //权值 
    G[num_edge].next = head[from]; //链表头插法的第一步 
    head[from] = num_edge; //链表头插法第二步 
}

void dijsktra() {
	for (int i = 0; i <= V; i++) { d[i] = INF; }
    d[S] = 0;
    que.push(P(0, S));
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.point;
        if (d[v] < p.dis) { continue; } //将优先队列中数据已经作废的点取消下面的遍历资格 
        for (int i = head[v]; i; i = G[i].next) { //链式向前星的取边方式 
            edge e = G[i];
            if (d[e.to] > d[v] + e.cost) { //刷新的过程 
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));//刷新成功的话我就压入优先队列中 
            }
        }
    }
	return ;
} 
 
