/*************************************************************************
	> File Name: OJ_516.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月28日 星期日 22时28分23秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;
#define MAX_N 100000

long long ans, n, num_c[MAX_N + 5], num_w[MAX_N + 5];
string str;

int main() {
    cin >> n >> str;
    int cn = 0, wn = 0;
    for (int i = 0, j = str.size() - 1; i < str.size(); i++, j--) {
        if (str[i] == 'C') cn++;
        if (str[j] == 'W') wn++;
        num_c[i] = cn;
        num_w[j] = wn;
    }
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'O') {
            ans += num_c[i] * num_w[i];
        }
    }
    cout << ans << endl;

    return 0;
}

