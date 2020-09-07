/*************************************************************************
	> File Name: 1036选数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月28日 星期日 14时35分53秒
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int n, k, num[25], ans;
void dfs (int i, int base, int sum);
bool is_prime (int x);

int main () {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> num[i];
    dfs(1, 0, 0);
    cout << ans << endl;
    return 0;
}

void dfs (int i, int base, int sum) {
    if (base == k) {
        if (is_prime(sum)) ans++;
        return ;
    }
    for (int j = i; j <= n; j++) {
        dfs(j + 1, base + 1, sum + num[j]);
    }
    return ;
}

bool is_prime (int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return n != 1;
}

