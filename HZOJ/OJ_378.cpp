/*************************************************************************
	> File Name: OJ_378.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 16时24分44秒
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

int main() {
    string str;
    cin >> str;
    stack<int> sta;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
           sta.push(str[i]);
        }

        if (str[i] == ')') {
            if (sta.top() == '(') {
                sta.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        } 

        if (str[i] == ']') {
            if (sta.top() == '[') {
                sta.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        } 

        if (str[i] == '}') {
            if (sta.top() == '{') {
                sta.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        } 

    } 
    
    if (sta.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }



    return 0;
}
