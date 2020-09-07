/*************************************************************************
	> File Name: 1724东风谷早苗.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月15日 星期日 19时34分40秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
string a;
int t, b[3], x, y;
int main() {
    cin >> a >> t;
    int m = a.size();
    for (int i = 0; i < m; i++) {
        if (a[i] == 'E') { b[0]++; }
        else if (a[i] == 'S') { b[1]--; }
        else if (a[i] == 'W') { b[0]--; }
        else if (a[i] == 'N') { b[1]++; }
    }
    for (int i = 0; i < t % m; i++) {
        if (a[i] == 'E') { x++; }
        else if (a[i] == 'S') { y--; }
        else if (a[i] == 'W') { x--; }
        else if (a[i] == 'N') { y++; }
    }
    cout << x + t / m * b[0] << ' ' << y + t / m * b[1] << endl;
    return 0;
}
