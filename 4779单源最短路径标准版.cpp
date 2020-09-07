#include <iostream>
#include <cstdio>
#include <queue>

#define MAXD 100010
#define MAX_MAX 200010
#define INF 2147483647

using namespace std;

struct edge { int to, cost, next; }; //������to��cost��next��: next�� 
edge G[MAX_MAX]; //��������������͵����������洢�ߡ� 
struct P{//Ϊ�����ȶ��н������� 
    int dis, point; 
    P() {
    	
	}
    P(int dis, int point) {
    	this->dis = dis;
    	this->point = point;
	}
    bool operator <( const P& x ) const { //����С�ں� 
	    return dis > x.dis;
	}
};
/* bool operator <(const P& a, const P& b) {
	return a.dis > b.dis;
} */
priority_queue <P> que; //Ĭ�ϵ�stl���ȶ��У����ص���С�ں� 
int V, E, S, d[MAXD], head[MAXD], num_edge; //������������Դ�㣬�洢ÿ���㵽Դ��ľ��룬��ͷ:һ����ͷ����㣬�ۼ�������ʾ�ߵı�š� 

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
    G[++num_edge].to = to; //�յ� 
    G[num_edge].cost = cost; //Ȩֵ 
    G[num_edge].next = head[from]; //����ͷ�巨�ĵ�һ�� 
    head[from] = num_edge; //����ͷ�巨�ڶ��� 
}

void dijsktra() {
	for (int i = 0; i <= V; i++) { d[i] = INF; }
    d[S] = 0;
    que.push(P(0, S));
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.point;
        if (d[v] < p.dis) { continue; } //�����ȶ����������Ѿ����ϵĵ�ȡ������ı����ʸ� 
        for (int i = head[v]; i; i = G[i].next) { //��ʽ��ǰ�ǵ�ȡ�߷�ʽ 
            edge e = G[i];
            if (d[e.to] > d[v] + e.cost) { //ˢ�µĹ��� 
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));//ˢ�³ɹ��Ļ��Ҿ�ѹ�����ȶ����� 
            }
        }
    }
	return ;
} 
 
