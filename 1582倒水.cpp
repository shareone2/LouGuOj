/*************************************************************************
	> File Name: 1582倒水.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月27日 星期六 18时16分06秒
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

long long n, k, num[200], cnt, flog, sum, base;

int main () {
    cin >> n >> k;
    while (n > 0) {
        if (n & 1) num[cnt++] = 1;
        else num[cnt++] = 0;
        n >>= 1;
    }
    for (int i = cnt - 1; i >= 0; i--) {
        if (k == 0) break;
        if (num[i] == 1) {
            k--;
            flog = i;
        }
    }
    base = pow(2, flog);
    for (int i = flog - 1; i >= 0; i--) 
        if (num[i] == 1) sum += pow(2, i);
    sum == 0 ? (cout << '0' << endl) : (cout << base - sum << endl);
    return 0;
}
