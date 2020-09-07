/************************************************************************
	> File Name: 1865A%BProblem.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月19日 星期五 07时35分55秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdio>

using namespace std;

bool is_prime[1000005];
int prime[1000005], cnt = 0;

int main () {
    is_prime[0] = 1;
    is_prime[1] = 1;
    for (int i = 2; i <= 1000000; i++) {
        if (!is_prime[i]) prime[cnt++] = i;
        for (int j = 0; j < cnt && i * prime[j] <= 1000000; j++) {
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    int n, m;
    cin >> n >> m;
    while (n--) {
        int l, r;
        cin >> l >> r;
        if (r > m || l < 1) {
            cout << "Crossing the line" << endl;
        } else {
            int ans = 0;
            for (int i = l; i <= r; i++) {
                if (!is_prime[i]) ans++;
            }
            cout << ans << endl;
        }
    }
    //printf("Time used = %f(ms)\n", (double)clock() / CLOCKS_PER_SEC * 1000);
    return 0;
}

