/*************************************************************************
	> File Name: 1426小鱼会有危险吗.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月10日 星期三 16时05分34秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    double s, x, v = 7;
    cin >> s >> x;
    double h = s - x;
    while (h > 0) {
        h -= v;
        v *= 0.98;
    }
    cout << (2 * x + h <= v * 0.98 ? 'n' : 'y') << endl;
    return 0;
}
