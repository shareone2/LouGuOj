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
    edge() { //ϵͳ�Դ���Ĭ�Ϲ��캯�� 
    	
	}
	edge(int to, int cost) {//�Զ�����вι��캯�� 
		this->to = to; //thisָ�� 
		this->cost = cost;
	} 
}; 

vector <edge> G[MAXD]; //�� 
typedef pair <int, int> P; //�������ȶ��е��������� 
priority_queue <P, vector <P>, greater <P> > que; //���ȶ��У����صķ�ʽΪ���ں� 
int V, E, S, d[MAXD]; //������ ������Դ�㣬���ڴ洢ÿ�������Դ��ľ��� 

int read(); //��� 
void add(int from, int to, int cost); //��ӱ� 
void dijsktra(); //�㷨 

int main() {
    V = read(), E = read(), S = read(); 
    for (int i = 1; i <= E; i++) {
        int from = read(), to = read(), cost = read();
        add(from, to, cost); //��� 
    }
    dijsktra();//���� 
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
	G[from].push_back(edge(to, cost));//���캯��������� 
	return ;
}

void dijsktra() {
	for (int i = 0; i <= V; i++) { d[i] = INF; }
    d[S] = 0;
    que.push(P(0, S)); //ѹ��Դ�㣬��һ��int��ʾ���ǵ�ǰ�����Դ��ľ��룬�ڶ���int��ʾ�������ĸ��㡣 
    while (!que.empty()) { 
        P p = que.top(); //ȡ����һ���� 
        que.pop(); //ɾ�����ȶ����о���Դ������ĵ� 
        int v = p.second; //ȡ����ǰ�� 
        for (int i = 0; i < G[v].size(); i++) { //����Դ��ֱ��������û�б�ѡ����ĵ�Ϊ��Щ 
            edge e = G[v][i]; //ȡ����vΪ���ĵ�i�ű� 
            if (d[e.to] > d[v] + e.cost) {//�ж�һ����Ҫˢ�µĵ�ľ���Դ��ľ����Ƿ����ѡ���ľ���ӱ߳��ľ��� 
                d[e.to] = d[v] + e.cost; //����Դ��ľ��뱻ˢ�� 
                que.push(P(d[e.to], e.to)); //ѹ�����ȶ��� 
            }
        }
    }
	return ;
} 
