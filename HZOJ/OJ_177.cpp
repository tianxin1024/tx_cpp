/*************************************************************************
	> File Name: OJ_177.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月22日 星期一 09时16分08秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, temp;
    cin >> str;
    temp = str;
    for (int i = 0; i < str.size(); i++) {
        cout << temp << endl;
        temp[0] = str[0 + 3];
        temp[1] = str[1 + 3];
        temp[2] = str[2 - 2];
        temp[3] = str[3 - 2];
        temp[4] = str[4 - 2];
        str = temp;
    }

    return 0;
}

