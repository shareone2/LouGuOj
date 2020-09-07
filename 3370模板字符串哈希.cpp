#include <iostream>
#include <cstring>

using namespace std;

int n, cnt = 1, head[1507], next[10010], ans; //cnt累加器 
string str[10010]; //用来存储输入的字符串的数组 

bool judge(string base);
void combine(string base);

int main() {
	cin >> n; //字符串的数量 
	while (n--) {
		string base;
		cin >> base; //输入字符串 
		if (!judge(base)) {
			combine(base); //归入到当前的链中 
			ans++; //答案加一 
		}
	}
	cout << ans << endl; //输入答案 
	return 0;
} 

bool judge(string base) {
	int len = base.length(); //当前字符串的长度 
	for (int i = head[len]; i; i = next[i]) { //和它长度相等的字符串是否和他相同 
		if (base == str[i]) {
			return 1;
		}
	}
	return 0; //不存在 
}

void combine(string base) {
	int len = base.length(); //算出当前字符串的长度 
	next[cnt] = head[len]; //链表头插法第一步 
	head[len] = cnt; //链表头插法第二步 
	str[cnt] = base; //存进去 
	cnt++; //再把编号进行加一 
	return ;
}
