/*************************************************************************
	> File Name: 1089津津的储蓄计划.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年02月24日 星期日 18时02分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int a, b = 12, c = 0, d = 0, e = 1, f = 0;
    while (b--){
        cin >> a;
        f++;
        if ((d < a % 100) && a <= 300){
            d = (300 - a) % 100 + d;
        } else if ((d >= a % 100) && a <= 300){
            d = d - (a % 100);
            a = a - (a % 100);
        }
        if (a <= 300){
            switch ((300 - a) / 100){
                case 0: break;
                case 1: c = c + 100;break;
                case 2: c = c + 200;break;
                default: c = c + 300;
            }
        }
        if ((a > 300) && e == 1){
            if (a - 300 > d){
                cout << "-" << f << endl;
                e = 0;
            } else {
              d = d - (a - 300);
            } 
        }
        if ((e == 1) && (f == 12)){
            cout << c + c * 0.2 + d << endl;
        }
    }
    return 0;
}
