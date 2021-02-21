/*************************************************************************
	> File Name: OJ_121.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 10时26分55秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    // "O" "Y" "H"  石头 剪刀 布
    if ((a == 'O' && b == 'Y') || (a == 'Y' && b == 'H') || (a == 'H' && b == 'O')) {
        cout << "MING" << endl;
    } else if ((a == 'O' && b == 'H') || (a == 'Y' && b == 'O') || (a == 'H' && b == 'Y')) {
        cout << "LI" << endl;
    } else {
        cout << "TIE" << endl;
    }

    return 0;
}

