/*************************************************************************
	> File Name: OJ_152.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 19时35分23秒
 ************************************************************************/

#include <iostream>
using namespace std;


string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday", "Sunday"};

int main() {
    int n;
    cin >> n;
    cout << week[(n + 2) % 7] << endl;
    return 0;
}
