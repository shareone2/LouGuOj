#include <iostream>
using namespace std;
int main(){
	int sum = 0;
	int a[10];
	for(int t = 0; t < 10; t++)
		cin >> a[t]; 
	int h;
	cin >> h;
	for(int t = 0; t < 10; t++) {
		if(h + 30 >= a[t])
		sum++;
	}
	cout << sum << endl;
	return 0;
}
