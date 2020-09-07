/*************************************************************************
	> File Name: 1146硬币翻转.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月21日 星期一 18时15分02秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n, num[106];
int main() {
    cin >> n;
    cout << n << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j != i) { num[j] == 0 ? (num[j] = 1) : (num[j] = 0); }
            cout << num[j];
        }
        cout << endl;
    }
    return 0;
}
