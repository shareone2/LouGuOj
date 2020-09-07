#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, d, e, f, g, h, i;
	int sum1, sum2, sum3;
	for (a = 1; a <= 9; a++) {
		for (b = 1; b <= 9; b++) {
			for(c = 1; c <= 9; c++) {
				for (d = 1; d <= 9; d++) {
					for (e = 1; e <= 9; e++) {
						for (f = 1; f <= 9; f++) {
							for (g = 1; g <= 9; g++) {
								for (h = 1; h <= 9; h++) {
									for (i = 1; i <= 9; i++) {
										if (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i &&
										    b != c && b != d && b != e && b != f && b != g && b != h && b != i &&
											c != d && c != e && c != f && c != g && c != h && c != i &&
											d != e && d != f && d != g && d != h && d != i &&
											e != f && e != g && e != h && e != i &&
											f != g && f != h && f != i &&
											g != h && g != i &&
											h != i) {
											sum1 = a * 100 + b * 10 + c;
										    sum2 = d * 100 + e * 10 + f;
										    sum3 = g * 100 + h * 10 + i;
										}
										if (2 * sum1 == sum2 && 3 * sum1 == sum3) {
										    cout << sum1  << " " << sum2 << " " << sum3 << endl;
										    sum1 = 1;
										    sum2 = 1;
										    sum3 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
