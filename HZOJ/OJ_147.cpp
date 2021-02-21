/*************************************************************************
	> File Name: OJ_147.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 19时12分23秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    if ((s[s.size() - 1] - '0') % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

