#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n, step, num[200], num_base[200];
char m[200], base[200];
bool judge();
void add();
int main() {
	cin >> n >> m;
	for (int i = 0; i <= 30; i++) {
		if (judge()) {
			cout << "STEP=" << i << endl;
			return 0;
		} else { add(); }
	}
	cout << "Impossible!" << endl;
	return 0;
} 
bool judge() {
	strcpy(base, m);
	reverse(base, base + strlen(base));
	if (strcmp(m, base) == 0) { return 1; }
	return 0;
}
void add() {
	int s1 = strlen(m);
	for (int i = s1 - 1; i >= 0; i--) { 
	    num[s1 - i - 1] = (m[i] >= 'A' ? (int)m[i] - 55 : (int)m[i] - 48); 
	    num_base[s1 - i - 1] = (base[i] >= 'A' ? (int)base[i] - 55 : (int)base[i] - 48);
	}
	for (int i = 0; i <= s1 - 1; i++) {
		num[i] = num[i] + num_base[i];
		num[i + 1] += num[i] / n;
		num[i] = num[i] % n;
	}
	int dd = (num[s1] > 0 ? s1 : s1 - 1);
	for (int i = dd; i >= 0; i--) { m[dd - i] = (num[i] >= 10 ? (char)(num[i] + 55) : (char)(num[i] + 48)); }
	return ;
}
