/*************************************************************************
	> File Name: OJ_040.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月19日 星期五 10时26分13秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

struct BigInt : vector<int> {
    BigInt() {
        push_back(0); 
    }
    BigInt operator+(const BigInt &b) {
        BigInt ret = (*this);
        for (int i = 0; i < b.size(); i++) {
            if (i < ret.size()) {
                ret[i] += b[i];
            } else {
                ret.push_back(b[i]);
            }
        }
        ret.normal();
        return ret;
    }
    BigInt(int x) {
        push_back(x);
        normal();
    }

    void normal() {
        for (int i = 0; i < size(); i++) {
            if (at(i) < 10) continue;
            if (i + 1 == size()) push_back(0);
            at(i + 1) += at(i) / 10;
            at(i) %= 10;
        }
        return ;
    }
};

BigInt f[505];

ostream &operator<<(ostream &out, const BigInt &a) {
    for (int i = a.size() - 1; i >= 0; i--) {
        out << a[i];
    }
    return out;
}

int main() {
    int n;
    cin >> n;
    f[0] = 1, f[1] = 0, f[2] = 1, f[3] = 1;
    for (int i = 4; i <= n; i++) {
        f[i] = f[i - 2] + f[i - 3];
    }
    cout << f[n] << endl;


    return 0;
}
