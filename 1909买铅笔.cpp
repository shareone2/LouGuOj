/*************************************************************************
	> File Name: 1909买铅笔.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月02日 星期六 20时55分56秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int a, b, n, c, d, e, f, g;
    cin >> n;
    cin >> a >> b;
    c = n / a;
    if (n % a != 0){
        c = (c + 1) * b;
    } else {
        c = c * b;
    }
    cin >> a >> b;
    d = n / a;
    if (n % a != 0){
        d = (d + 1) * b;
    } else {
        d = d * b;
    }
    cin >> a >> b;
    e = n / a;
    if (n % a != 0){
        e = (e + 1) * b;
    } else {
        e = e * b;
    }
    if (c <= d){
        f = c;
    } else {
        f = d;
    }
    if (c <= e){
        g = c;
    } else {
        g = e;
    }
    if (f <= g){
        cout << f << endl;
    } else {
        cout << g << endl;
    }
    return 0;
}
