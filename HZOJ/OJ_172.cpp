/*************************************************************************
	> File Name: OJ_172.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 23时17分27秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s[10];
    for (int i = 0; i < 10; i++) {
        cin >> s[i];
    }
    sort(s, s+10);
    for (int i = 0; i < 10; i++) {
        cout << s[i] << endl;
    }

    return 0;
}
