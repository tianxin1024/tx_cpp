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
    string str;
    cin >> str;
    int size = str.size(), n = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << str[n]; 
            n++;
            n %= size;
        }
        cout << endl;
        n += size - 2;
        n %= size;
    }
    return 0;
}

