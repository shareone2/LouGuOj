#include <iostream>
using namespace std;
int n, s, a, b, num[105], xi, yi, cnt;
int main() {
    cin >> n >> s >> a >> b;
    for (int i = 1; i <= n; i++) {
        cin >> xi >> yi;
        if (xi <= a + b) { num[yi]++; }
    }
    for (int i = 0; i <= 100 && s > 0; i++) {
        for (int j = 1; j <= num[i] && s - i >= 0; j++, s -= i) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

