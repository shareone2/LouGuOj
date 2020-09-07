/*************************************************************************
	> File Name: 1200你的飞碟在这.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月05日 星期二 16时34分46秒
 ************************************************************************/

#include<iostream>

using namespace std;

int main(){
    int a = 1, b = 1;
    char A[26], B[26];
    cin >> A  >> B;
    for (int i = 0; A[i] != '\0'; i++) {
        a = a * (A[i] - 64);
    }
    for (int i = 0; B[i] != '\0'; i++) {
        b = b * (B[i] - 64);
    }
    if ((a % 47) == (b % 47)) {
        cout << "GO" << endl;
    } else {
        cout << "STAY" << endl;
    }
    return 0;
}
