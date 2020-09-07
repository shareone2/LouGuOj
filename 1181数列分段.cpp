/*************************************************************************
	> File Name: 1181数列分段.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月10日 星期日 09时02分56秒
 ************************************************************************/

#include<iostream>

//#include<algorithm>

using namespace std;

int main(){
    int a[100005], N, M;
    cin >> N >> M;
    for (int i = 0; i <= N - 1; i++) {
        cin >> a[i];
    }
    //sort(a[0], a[N - 1]);
    int b = 0, c = 0;
    for (int i = 0; i <= N - 1; i++) {
        if (c + a[i] <= M) {
            c = c + a[i];
        } else {
            b++;
            c = 0;
            c = c + a[i];
        }
    }
    cout << b + 1 << endl;
    return 0;
}
