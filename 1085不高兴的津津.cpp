/*************************************************************************
	> File Name: P1085不高兴的津津.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年02月24日 星期日 17时07分32秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int a, b, c = 7, d = 0, e = 0, f;
    while (c--){
        cin >> a >> b;
        e++;
        if (a + b > 8 && a + b > d){
            d = a + b;
            f = e;
        } 
        if (e == 7){
            cout << f << endl;
        }
    }
    return 0;
}
