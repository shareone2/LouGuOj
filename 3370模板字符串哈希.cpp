#include <iostream>
#include <cstring>

using namespace std;

int n, cnt = 1, head[1507], next[10010], ans; //cnt�ۼ��� 
string str[10010]; //�����洢������ַ��������� 

bool judge(string base);
void combine(string base);

int main() {
	cin >> n; //�ַ��������� 
	while (n--) {
		string base;
		cin >> base; //�����ַ��� 
		if (!judge(base)) {
			combine(base); //���뵽��ǰ������ 
			ans++; //�𰸼�һ 
		}
	}
	cout << ans << endl; //����� 
	return 0;
} 

bool judge(string base) {
	int len = base.length(); //��ǰ�ַ����ĳ��� 
	for (int i = head[len]; i; i = next[i]) { //����������ȵ��ַ����Ƿ������ͬ 
		if (base == str[i]) {
			return 1;
		}
	}
	return 0; //������ 
}

void combine(string base) {
	int len = base.length(); //�����ǰ�ַ����ĳ��� 
	next[cnt] = head[len]; //����ͷ�巨��һ�� 
	head[len] = cnt; //����ͷ�巨�ڶ��� 
	str[cnt] = base; //���ȥ 
	cnt++; //�ٰѱ�Ž��м�һ 
	return ;
}
