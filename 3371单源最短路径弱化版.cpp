#include <iostream>
#include <cstdio>
#include <vector>
#include <utility> 
#include <queue>

#define MAXD 10010
#define INF 2147483647

using namespace std;

struct edge { 
    int to, cost;
    edge() { //系统自带的默认构造函数 
    	
	}
	edge(int to, int cost) {//自定义的有参构造函数 
		this->to = to; //this指针 
		this->cost = cost;
	} 
}; 

vector <edge> G[MAXD]; //边 
typedef pair <int, int> P; //用于优先队列的数据类型 
priority_queue <P, vector <P>, greater <P> > que; //优先队列，重载的方式为大于号 
int V, E, S, d[MAXD]; //点数， 边数，源点，用于存储每个点距离源点的距离 

int read(); //快读 
void add(int from, int to, int cost); //添加边 
void dijsktra(); //算法 

int main() {
    V = read(), E = read(), S = read(); 
    for (int i = 1; i <= E; i++) {
        int from = read(), to = read(), cost = read();
        add(from, to, cost); //添加 
    }
    dijsktra();//计算 
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

void add(int from, int to, int cost) {
	G[from].push_back(edge(to, cost));//构造函数方便添加 
	return ;
}

void dijsktra() {
	for (int i = 0; i <= V; i++) { d[i] = INF; }
    d[S] = 0;
    que.push(P(0, S)); //压入源点，第一个int表示的是当前点距离源点的距离，第二个int表示我这是哪个点。 
    while (!que.empty()) { 
        P p = que.top(); //取出第一个点 
        que.pop(); //删除优先队列中距离源点最近的点 
        int v = p.second; //取出当前点 
        for (int i = 0; i < G[v].size(); i++) { //找与源点直接相连且没有被选择过的点为哪些 
            edge e = G[v][i]; //取出以v为起点的第i号边 
            if (d[e.to] > d[v] + e.cost) {//判断一下我要刷新的点的距离源点的距离是否大于选择点的距离加边长的距离 
                d[e.to] = d[v] + e.cost; //距离源点的距离被刷新 
                que.push(P(d[e.to], e.to)); //压入优先队列 
            }
        }
    }
	return ;
} 
