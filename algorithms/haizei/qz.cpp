/*************************************************************************
	> File Name: qz.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月03日 星期三 15时05分11秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <vector>
using namespace std;

char q[105], z[105];

void func(int ql, int qr, int zl, int zr) {
    if (ql > qr) {
        return ;
    }
    if (ql == qr) {
        cout << q[ql];
        return ;
    }
    char root = q[ql];
    int ind = zl;
    while (z[ind] != root) {
        ind++;
    }
    func(ql + 1, ql + ind - zl, zl, ind - 1);
    func(ql + ind - zl + 1, qr, ind + 1, zr);
    cout << root;
}

int main() {
    cin >> q >> z;
    func(0, strlen(q), 0, strlen(z));
    cout << endl;

    return 0;
}
