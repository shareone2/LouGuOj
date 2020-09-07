#include <iostream>
#include <cstring>
using namespace std;
int heap[1000005], sz = 0, n, a, b;
void push(int x);
void pop();
int main() {
	memset(heap, 0, sizeof(heap));
	cin >> n;
	while (n--) {
		cin >> a;
		if (a == 1) {
			cin >> b;
			push(b);
		} else if (a == 2) { 
		    cout << heap[0] << endl;
		} else if (a == 3) {
			pop();
		}
	}
	return 0;
}
void push(int x) {
	int i = sz++;
	while (i > 0) {
		int p = (i - 1) / 2;
		if (heap[p] <= x) break;
		heap[i] = heap[p];
		i = p;
	}
	heap[i] = x;
	return ;
}
void pop() {
	int x = heap[--sz];
	int i = 0;
	while (i * 2 + 1 < sz) {
		int a = i * 2 + 1, b = i * 2 + 2;
		if (b < sz && heap[b] < heap[a]) a = b;
		if (heap[a] >= x) break;
		heap[i] = heap[a];
		i = a;
	}
	heap[i] = x;
	return ;
}
