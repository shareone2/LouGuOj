/*************************************************************************
	> File Name: 1739表达式匹配.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 09时36分39秒
 ************************************************************************/

#include <iostream>
#include <stack>

using namespace std;

int main () {
    stack <char> lift;
    char c[300];
    int cnt = 0, t = 1, count = 0;
    cin >> c;
    while (c[cnt] != '@') {
        if (c[cnt] == '(') {
            lift.push(c[cnt]);
            count++;
        }
        if (c[cnt] == ')') {
            count--;
            if (lift.empty()) {
                t = 0;
                break;
            }
            if (!lift.empty()) {
                lift.pop();
            }
        }
        cnt++;
    }
    if (t == 1 && count == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
