#include<iostream>
#include<cstring>
using namespace std;
char num[40];
void ss(int x, int e);
int main() {
    cin >> num;
    int length = strlen(num), flog = -1;
	for (int i = 0; i < length; i++) {
		if (num[i] == '.' || num[i] == '%' || num[i] == '/') {
			flog = i;
			break;
		}
	}
	if (flog == -1) {
		ss(length - 1, 0);
		cout << endl;
	} else if (num[flog] == '%') {
		ss(flog - 1, 0);
		cout << num[flog] << endl;
	} else if (num[flog] == '/') {
		ss(flog - 1, 0);
		cout << num[flog];
		ss(length - 1, flog + 1);
	} else if (num[flog] == '.') {
		ss(flog - 1, 0);
		cout << num[flog];
		int sss = flog + 1;
		for (int i = flog + 1; i <= length - 1; i++) {
			if (num[i] == '0') {
				sss = i + 1;
			} else { break; }
		}
		for (int i = length - 1; i >= sss; i--) { cout << num[i]; }
		if (sss == length) { cout <<'0'; }
		cout << endl;
	}
	return 0;
 }
 void ss(int x, int e) {
    int s = -1;
    for (int i = x; i >= e; i--) {
    	if (num[i] != '0' || s == 1) {
    		cout << num[i];
    		s = 1;
		}
    }
    if (s == -1) { cout << '0'; }
    return ;
 }
 
 
 
 
 
