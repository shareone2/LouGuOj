/*************************************************************************
	> File Name: 1318积水面积.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月16日 星期五 10时20分02秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n, num[10005], sum = 0, flog = 1;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) { cin >> num[i]; }
    while (flog) {
        flog = 0;
        int left = 1, right = 0;
        for (int i = 1; i <= n; i++) {
            if (!flog && num[i] > 0) { 
                flog = 1;
                left = i;
            }
            if (flog && num[i] > 0) { right = i; }
        }
        for (int i = left; i <= right; i++) {
            if (num[i] == 0) { sum++; }
            if (num[i] > 0) {num[i]--;}
        }
    }
    cout << sum << endl;
    return 0;
}
