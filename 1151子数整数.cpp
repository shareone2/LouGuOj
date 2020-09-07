/*************************************************************************
	> File Name: 1151子数整数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月24日 星期四 18时56分42秒
 ************************************************************************/

#include <iostream>
using namespace std;
int k, flog;
bool judge(int x);
int main() {
    cin >> k;
    for (int i = 10000; i <= 30000; i++) {
        if (judge(i) == 1) {
            cout << i << endl;
            flog = 1;
        }
    }
    if (!flog) { cout << "No" << endl; }
    return 0;
}
bool judge(int x) {
    int a = x / 100, b = x / 10 % 1000, c = x % 1000;
    if (!(a % k) && !(b % k) && !(c % k)) { return 1; }
    return 0;
}
