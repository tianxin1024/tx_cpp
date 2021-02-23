/*************************************************************************
	> File Name: OJ_213.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月23日 星期二 14时05分02秒
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
#define MAX_N 30

bool cmp(int a, int b) {
    return a > b;
}


int main() {
    int n, math[MAX_N + 5] = {0}, B[6] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> math[i];
        if (math[i] == 100) {
            B[0] += 1;
        } else if (math[i] >= 90 && math[i] <= 99) {
            B[1] += 1;
        } else if (math[i] >=80 && math[i] <= 89) {
            B[2] += 1;
        } else if (math[i] >= 70 && math[i] <= 79) {
            B[3] += 1;
        } else if (math[i] >= 60 && math[i] <= 69) {
            B[4] += 1;
        } else {
            B[5] += 1;
        }
    }

    sort(math, math + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << math[i] << endl;
    }
    int flag = 0;
    for (int i = 0; i < 6; i++) {
        if (flag == 1) {
            cout << " ";
        }
        cout << B[i];
        flag = 1;
    }
    cout << endl;
    

    return 0;
}
