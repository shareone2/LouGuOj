/*************************************************************************
	> File Name: 1309瑞士轮.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月17日 星期二 16时06分24秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
struct people {
    int num, point, power;  
};
people ss[200009];
int n, r, q;
int cmp(people a, people b) {
    return a.point != b.point ? a.point > b.point : a.num < b.num;
}
int main() {
    cin >> n >> r >> q;
    for (int i = 1; i <= 2 * n; i++) {
        ss[i].num = i;
        cin >> ss[i].point;
    }
    for (int i = 1; i <= 2 * n; i++) {
        cin >> ss[i].power;
    }
    stable_sort(ss + 1, ss + 2 * n + 1, cmp);
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= 2 * n; j += 2) {
            if (ss[j].power > ss[j + 1].power) {
                ss[j].point++;
            } else {
                ss[j + 1].point++;
            }
        }
        stable_sort(ss + 1, ss + 2 * n + 1, cmp);
    }
    cout << ss[q].num << endl;
    return 0;
}
