/*************************************************************************
	> File Name: OJ_178.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 00时13分45秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

char s[5000000] = {'A'};

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int size = strlen(s);
        for (int j = 0; j < size; j++) {
            s[2 * size - j] = s[j];
        }
        s[size] = 'A' + i;
    }
    cout << s << endl;
    return 0;
}

