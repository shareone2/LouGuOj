#include <iostream>
#include <algorithm> 
using namespace std;
struct node{
	int a;
	int b;
}p[123456];
int cmp(node a, node b) {
		return a.b < b.b;
	} 
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> p[i].a >> p[i].b;
	}
	
	sort(p,p+n,cmp);
	int s = 1;
	int end = p[0].b;
	for(int i = 1; i < n; ++i){
		if(end <= p[i].a){
			s++;
			end = p[i].b;
		}
	}
	cout << s << endl;
	return 0;
}
