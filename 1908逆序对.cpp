/*************************************************************************
	> File Name: 1908逆序对.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月16日 星期四 21时21分12秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX 900000
#define SENTINEL -2000000000
void mergeSort(int left, int mid, int right);
void merge(int left, int right);
int L[MAX / 2 + 2], R[MAX / 2 + 2], A[MAX], n;
long long cnt;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> A[i];
	merge(0, n);
	cout << cnt << endl;
	return 0;
}

void merge(int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		merge(left, mid);
		merge(mid, right);
		mergeSort(left, mid, right);
	}
	return ;
}

void mergeSort(int left, int mid, int right) {
	int n1 = mid - left, n2 = right - mid;
	for (int i = 0; i < n1; i++) L[i] = A[left + i];
	for (int i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1] = R[n2] = SENTINEL;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		if (L[i] > R[j]) {
            if(L[i] != SENTINEL) cnt += (n2 - j);
			A[k] = L[i++];
		} else A[k] = R[j++];
	}
	return ;
}

