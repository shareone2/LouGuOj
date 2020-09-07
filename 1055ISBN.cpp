/*************************************************************************
	> File Name: 1055ISBN.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月04日 星期一 18时48分49秒
 ************************************************************************/

#include<iostream>

#include<cstdio>

using namespace std;

int main(){
    int a[4], c, d = 0, e, f;
    cin >> a[0];
    getchar();
    cin >> a[1];
    e = a[1];
    getchar();
    cin >> a[2];
    f = a[2];
    getchar();
    if (scanf("%d", &a[3]) != 1) {
        a[3] = 10;
    }
    c = a[0] * 1;
    for (int i = 4; i >= 2; i--) {
        d = a[1] % 10 * i + d;
        a[1] = a[1] / 10;
    }
    c = c + d;
    d = 0;
    for (int i = 9; i >= 5; i--) {
        d = a[2] % 10 * i + d;
        a[2] = a[2] / 10;
    }
    c = c + d;
    c = c % 11;
    if (a[3] == c) {
        cout << "Right" << endl;
    } else {
        if (c == 10) {
            cout << a[0] << "-" << e << "-" << f << "-" << 'X' << endl;
        }
        if (c != 10) {
            cout << a[0] << "-" << e << "-" << f << "-" << c << endl;
        }
    }
    return 0;
}
