/*************************************************************************
	> File Name: 1579哥德巴赫猜想.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月09日 星期二 18时47分12秒
 ************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstring>

using namespace std;

bool is_primer[20005];
int primer[20005], cnt = 0;

int ss(int k);

int main () {
    memset(is_primer, 0, sizeof(is_primer));
    is_primer[0] = 1;
    is_primer[1] = 1;
    for (int i = 2; i <= 19999; i++) {
        if (is_primer[i] == 0) primer[cnt++] = i;
        for (int j = 0; j < cnt && i * primer[j] <= 19999; j++) {
            is_primer[i * primer[j]] = 1;
            if (i % primer[j] == 0) break;
        }
    }
   // for (int i = 0; i < cnt; i++) {
   //     cout << primer[i] << endl;
   // }

    int n, k, flog = 1;
    cin >> n;

    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j < cnt; j++) {
            k = n - primer[i] - primer[j];
            if (ss(k) && k > 0 && primer[i] < n && primer[j] < n) {
                cout << primer[i] << ' ' << primer[j] << ' ' << k << endl;
                flog = 0;
                break;
            }    
        }
        if (flog == 0) break;
    }

   // printf("Time used = %.2f(ms)\n", (double)clock() / CLOCKS_PER_SEC * 1000);
    return 0;
}
int ss (int k) {
    for (int i = 2; i * i <= k; i++) {
        if (k % i == 0) return 0;
    }
    return 1;
}
