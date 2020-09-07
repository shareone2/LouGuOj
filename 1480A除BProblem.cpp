/*************************************************************************
	> File Name: 1480A除BProblem.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月17日 星期五 20时19分28秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string a;
    int b, x = 0, t = 0;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (((a[i] - 48) + x) / b > 0 || t == 1) {
            cout << ((a[i] - 48) + x) / b;
            x = x % b;
            t = 1;
        }
        x += (a[i] - 48) % b;
        x *= 10;
    }
    return 0;
}

