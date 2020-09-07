/*************************************************************************
	> File Name: 1051谁拿了最多的奖学金.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月16日 星期一 19时26分44秒
 ************************************************************************/

#include <iostream>
using namespace std;
struct people {
    int qimo, pingyi, lunwen, ans = 0;
    char name[100], ganbu, xibu;
};
people P[105];
int n, sum, base = 1;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> P[i].name >> P[i].qimo >> P[i].pingyi >> P[i].ganbu >> P[i].xibu >> P[i].lunwen;
        if (P[i].qimo > 80 && P[i].lunwen >= 1) { P[i].ans += 8000; }
        if (P[i].qimo > 85 && P[i].pingyi > 80) { P[i].ans += 4000; }
        if (P[i].qimo > 90) { P[i].ans += 2000; }
        if (P[i].qimo > 85 && P[i].xibu == 'Y') { P[i].ans += 1000; }
        if (P[i].pingyi > 80 && P[i].ganbu == 'Y') { P[i].ans += 850; }
        sum += P[i].ans;
        if (i != 1 && P[i].ans > P[base].ans) { base = i; }
    }   
    cout << P[base].name << endl << P[base].ans << endl << sum << endl;
    return 0;
}
