/*************************************************************************
	> File Name: 1449后缀表达式.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 10时13分42秒
 ************************************************************************/

#include <iostream>
#include <stack>

using namespace std;

stack <int> a;
int x, y;

void ss() {
    x = a.top();
    a.pop();
    y = a.top();
    a.pop();
}

int main () {
    char b[1005];
    cin >> b;
    for (int i = 0; b[i] != '@'; i++) {
        if (b[i] >= '0' && b[i] <= '9') {
            int sum = 0;
            while (b[i] != '.') {
                sum = sum * 10 + (b[i++] - '0');
            }
            a.push(sum);
        }
        if (b[i] == '.') continue;
        if (b[i] == '-') {
            ss();
            a.push(y - x);
        } else if (b[i] == '+') {
            ss();
            a.push(y + x);
        } else if (b[i] == '*') {
            ss();
            a.push(y * x);
        } else if (b[i] == '/') {
            ss();
            a.push(y / x);
        }   
    }
    cout << a.top() << endl;
    return 0;
}
