/*************************************************************************
	> File Name: aaaa.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月16日 星期二 17时30分11秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char a[100001], b[100001];
int A[100001], B[100001], C[100001];

int main () {
    scanf("%s%s", a, b);
    int lena = strlen(a), lenb = strlen(b), lenc = lena + lenb;
    for (int i = lena - 1; i >= 0; i--) A[lena - i] = a[i] - '0';
    for (int i = lenb - 1; i >= 0; i--) B[lenb - i] = b[i] - '0';
    for (int i = 1; i <= lena; i++) {
        int x = 0;
        for (int j = 1; j <= lenb; j++) {
            C[i + j - 1] = C[i + j - 1] + A[i] * B[j] + x;
            x = C[i + j - 1] / 10;
            C[i + j - 1] = C[i + j - 1] % 10;
        }
        C[i + lenb] = x;
    }
    while (C[lenc] == 0 && lenc > 1) lenc--;
    for (int i = lenc; i >= 1; i--) cout << C[i];
    cout << endl;
    return 0;
}
