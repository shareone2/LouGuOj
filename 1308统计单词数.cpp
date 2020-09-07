#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
string a, b;
int ans, flog, beta;
int main() {
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.size(); i++) { a[i] = tolower(a[i]); }
    for (int i = 0; i < b.size(); i++) { b[i] = tolower(b[i]); }
    a = ' ' + a + ' ';
    b = ' ' + b + ' ';
    for (; b.find(a, beta) != -1; ans++) {
        if (ans == 0) { flog = b.find(a); }
        beta = b.find(a, beta) + 1;
    }
    ans ? (cout << ans << ' ' << flog << endl) : (cout << -1 << endl);
    return 0;
}
