#include <iostream>
#include <cstring>
using namespace std;
string a;
int cnt = 0;
int main() {
    cin >> a;
    cnt = a.size();
    for (cnt--; cnt != 0 && cnt % 2; cnt /= 2) {
        for (int i = 0; i <= cnt / 2; i++) {
            if (a[i] != a[cnt - i]) {
                cout << cnt + 1 << endl;
                return 0;
            }
        }
        
    }
    cout << cnt + 1 << endl;
    return 0;
}
