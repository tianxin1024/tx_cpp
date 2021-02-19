/*************************************************************************
	> File Name: OJ_039.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月19日 星期五 09时50分37秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {

    int begin, n;
    cin >> begin >> n;
    while (n--) {
        if (begin % 2 != 0) {
            begin++;
        }
        if (begin < 0) {
            begin = 0;
        }
        cout << begin << endl; 
        begin = begin + 2;
    }
    return 0;
}
