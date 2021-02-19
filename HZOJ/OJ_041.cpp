/*************************************************************************
	> File Name: OJ_041.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月19日 星期五 14时11分25秒
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
    BigInt(int x) {
        push_back(x);
        normal();
    }
    BigInt operator*(int x) {
        BigInt ret(*this);
        for (int i = 0; i < ret.size(); i++) {
            ret[i] *= x;
        }
        ret.normal();
        return ret;
    }
    BigInt operator+(const BigInt &num) {
        BigInt ret(*this);
        for (int i = 0; i < num.size(); i++) {
            if (i < ret.size()) ret[i] += num[i];
            else ret.push_back(num[i]);
        }
        ret.normal();  // 进位转换
        return ret;
    }
    void normal() {  // 对大整数进行进位转换，封装成函数
        for (int i = 0; i < size(); i++) {
            if (at(i) < 10) continue;
            if (i + 1 == size()) push_back(0);
            at(i + 1) += at(i) / 10;
            at(i) %= 10;
        }
        return ;
    }
};

BigInt f[1005];

ostream &operator<<(ostream &out, const BigInt &num) {
    for (int i = num.size() - 1; i >= 0; --i) {
        out << num[i];
    }
    return out;
}

int main() {
    int n, k;
    cin >> n >> k;
    f[1] = k;
    f[2] = k * (k - 1);
    f[3] = k * (k - 1) * (k - 2);
    for (int i = 4; i <= n; i++) {
        f[i] = f[i - 1] * (k - 2) + f[i - 2] * (k - 1);
    }
    cout << f[n] << endl;

    return 0;
}
