#include <iostream>

#include <cstdio>

#include <string.h>

using namespace std;

int main(){
	int arr[10000];
	char a[10000];
	int arr2[10000];
	char a2[10000];
	scanf("%s%s", a, a2);
	int j = 0;
	for (int i = strlen(a) - 1; i >= 0; i--) {
		arr[j] = a[i] - '0';
		j++;
	}
	int k = 0;
	for (int i = strlen(a2) - 1; i >= 0; i--) {
		arr2[k] = a2[i] - '0'; 
		k++;
	}
	int y;
	if (j >= k) {
		y = j;
	}
	else {
		y = k;
	}
	for (int i = 0; i <= y - 1; i++) {
		arr[i] = arr[i] + arr2[i];
		arr[i + 1] = arr[i] / 10 + arr[i + 1];
		arr[i] = arr[i] % 10;
	}
	if (arr[y] != 0) {
	    for (int i = y; i >= 0; i--) {
		    cout << arr[i];
	    }
	}
	if (arr[y] == 0) {
		for (int i = y - 1; i >= 0; i--) {
			cout << arr[i];
		}
	}
	return 0;
} 
