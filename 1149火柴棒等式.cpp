#include <iostream>
using namespace std;
int num[2100] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, n, cnt;
int main() {
    cin >> n;
    for (int i = 10; i <= 2000; i++) { num[i] = num[i / 10] + num[i % 10]; } 
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) {
            if (num[i] + num[j] + num[i + j] == n - 4) { cnt++; }
        }
    }
    cout << cnt << endl;
    return 0;
}
