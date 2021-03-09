/*************************************************************************
	> File Name: OJ_189.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月08日 星期一 17时30分31秒
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

#define MAX_N 1000000

int n, k, num[MAX_N + 5];

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < k; i++) {
        int temp;
        scanf("%d", &temp);
        if (i) {
            cout << " ";
        }
        int left = 1, right = n;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (num[mid] == temp) {
                cout << mid;
                break;
            } 
            if (num[mid] > temp) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        if (left > right) {
            cout << 0;
        }
    }

    return 0;
}
