
/*************************************************************************
	> File Name: T1099大整数减法.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 18时46分55秒
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char a[100005] = {0}, b[100005] = {0};
    cin >> a >> b;
    int lena, lenb;
    lena = strlen(a);
    lenb = strlen(b);
    int cnt = 0, A[100005] = {0}, B[100005] = {0};
    for (int i = lena - 1; i >= 0; i--) {
        A[cnt++] = a[i] - '0'; 
    }
    cnt = 0;
    for (int i = lenb - 1; i >= 0; i--) {
        B[cnt++] = b[i] - '0'; 
    }
    int len = lena > lenb ? lena : lenb;
    if (lena > lenb) {
        for (int i = 0; i < len; i++) {
            if (A[i] - B[i] < 0) {
                A[i + 1]--;
                A[i] = A[i] + 10;
                A[i] = A[i] - B[i];
            } else {
                A[i] = A[i] - B[i];
            }
        }
        for (int i = lena - 1; i >= 0; i--) {
            cout << A[i];
        }
        cout << endl;
    } else  if (lenb > lena) {
        for (int i = 0; i < len; i++) {
            if (B[i] - A[i] < 0) {
                B[i + 1]--;
                B[i] = B[i] + 10;
                B[i] = B[i] - A[i];
            } else {
                B[i] = B[i] - A[i];
            }
        }
        cout << '-';
        for (int i = lenb - 1; i >= 0; i--) {
            cout << B[i];
        }
        cout << endl;
    } else if (lena == lenb && A[lena - 1] > B[lenb - 1]) {
        for (int i = 0; i < len; i++) {
            if (A[i] - B[i] < 0) {
                A[i + 1]--;
                A[i] = A[i] + 10;
                A[i] = A[i] - B[i];
            } else {
                A[i] = A[i] - B[i];
            }
        }
        for (int i = lena - 1; i >= 0; i--) {
            cout << A[i];
        }
        cout << endl;
    } else if (lena == lenb && B[lenb - 1] > A[lena - 1]) {
        for (int i = 0; i < len; i++) {
            if (B[i] - A[i] < 0) {
                B[i + 1]--;
                B[i] = B[i] + 10;
                B[i] = B[i] - A[i];
            } else {
                B[i] = B[i] -A[i];
            }
        }
        cout << '-';
        for (int i = lenb - 1; i >= 0; i--) {
            cout << B[i];
        }
        cout << endl;
    } else if (lena = lenb && A[lena - 1] == B[lenb - 1]) {
        int t = 1;
        for (int i = 0; i < len; i++) {
            if (A[i] - B[i] != 0) t = 0;
        }
        if (t == 1) cout << '0' << endl;
    }
    return 0;
}
