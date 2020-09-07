/*************************************************************************
	> File Name: 3383线性筛素数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月15日 星期一 19时16分24秒
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

bool is_prime[10000001];
int prime[10000001], cnt = 0, c[10000001];
void get_prime(int n);

int main () {
    int n, m;
    cin >> n >> m;
    get_prime(n);
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        cout << (is_prime[c[i]] == 0 ? "Yes" : "No") << endl;
    }
    return 0;
}

void get_prime (int n) {
    memset(is_prime, 0, sizeof(is_prime));
    is_prime[0] = 1;
    is_prime[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (!is_prime[i]) prime[cnt++] = i;
        for (int j = 0; j < cnt && i * prime[j] <= n; j++) {
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

