/*************************************************************************
	> File Name: 1159排行榜.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月09日 星期一 15时02分46秒
*************************************************************************/
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int n;
queue <string> a, b;
string c[105], x, y;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        if (y == "UP") { a.push(x); }
        else if (y == "DOWN") { b.push(x); }
        else if (y == "SAME") { c[i] = x; }
    }
    for (int i = 1; i <= n; i++) {
        if (c[i].size() != 0) { cout << c[i] << endl; }
        else if (!b.empty()) {
            cout << b.front() << endl;
            b.pop();
        } else if (!a.empty()) {
            cout << a.front() << endl;
            a.pop();
        }
    }
    return 0;
}
