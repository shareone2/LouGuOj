/*************************************************************************
	> File Name: UVA439骑士的移动.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月28日 星期二 18时38分12秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
class point {
    public:
        int a, b, cnt;
};
point location[100];
queue <int> addvance;
int flog[10][10], t;
int main() {
    int x, y, kongge, sx, sy, huiche;
    while (x = getchar() - 96) {
        y = getchar() - 48, kongge = getchar(), sx = getchar() - 96, sy = getchar() - 48, huiche = getchar();
        if (x == sx && y == sy) { cout << "To get from " << (char)(x + 96) << y << " to " << (char)(sx + 96) << sy <<" takes "<< 0 <<" knight moves." << endl; }
        t = 0;
        memset(flog, 0, sizeof(flog));
        location[t].a = x, location[t].b = y, location[t].cnt = 0;
        flog[x][y] = 1;
        addvance.push(t);
        while (!addvance.empty()) {
            int num = addvance.front();
            for (int i = -2; i <= 2; i++) {
                for (int j = -2; j <= 2; j++) {
                    int base1 = location[num].a + i, base2 = location[num].b + j;
                    if (abs(i) != abs(j) && i != 0 && j != 0 && base1 >= 1 && base1 <= 8 && base2 >= 1 && base2 <= 8 && !flog[base1][base2]) {
                        if (base1 == sx && base2 == sy) { cout << "To get from " << (char)(x + 96) << y << " to " << (char)(sx + 96) << sy <<" takes "<< location[num].cnt + 1 <<" knight moves." << endl; }
                        t++;
                        flog[base1][base2] = 1;
                        location[t].a = base1;
                        location[t].b = base2;
                        location[t].cnt = location[num].cnt + 1;
                        addvance.push(t);
                    }
                }
            }
            addvance.pop();
        }
    }
    return 0;
}
