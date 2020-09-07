#include <iostream>

#include <cstdio>

using namespace std;

int main(){
	char a[1000]; 
	int n, i;
	cin >> n >> a; 
	for (i = 0; a[i] != '\0'; i++);
	for (int j = 0; j < i; j++) {
		if ((a[j] + n) > 122) {
			if (a[j] == 'z' && n == 26) {
				a[j] = 'z';
			}
			else {
			a[j] = 96 + (((a[j] + n) - 122) % 26);
		    }
		}
		else {
		    a[j] = a[j] + n;	
		}
		printf("%c", a[j]);
	}
	return 0; 
}
  
