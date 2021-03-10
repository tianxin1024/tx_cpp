/*************************************************************************
	> File Name: OJ_235.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月10日 星期三 15时34分02秒
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

int n, num[15], cnt;

void func(int s) {
    for (int i = s; i <= n; i++) {
        num[cnt] = i;
        cnt++;
        for (int j = 0; j < cnt; j++) {
            if (j != 0) cout << " ";
            cout << num[j];
        }
        cout << endl;
        func(i + 1);
        cnt--;
    }
}

int main() {
    cin >> n;
    func(1);

    return 0;
}
