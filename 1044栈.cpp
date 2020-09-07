#include <iostream>
using namespace std;
int f[20][20], n;
int main() {
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (i == 0) { f[i][j] = 1; }
            else if (j == 0) { f[i][j] = f[i - 1][j + 1]; }
            else { f[i][j] = f[i][j - 1] + f[i - 1][j + 1]; }
        }
    }
    cout << f[n][0] << endl;
    return 0;
}

