/*************************************************************************
	> File Name: OJ_078.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 19时02分09秒
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

string StrAdd(string str1, string str2)
{
	size_t str1Length = str1.size();
	size_t str2Length = str2.size();
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());
	string rStr;
	int flag = 0;
	for (int i = 0; i < str1Length; i++)
	{
		char temp = str1[i] - '0' + str2[i] - '0' + flag;
		temp = temp < 10 ?(flag=0, temp) : (flag = 1, temp - 10);
		rStr += (temp+'0');
	}
	for (int j = str1Length; j < str2Length; j++)
	{
		char temp = str2[j] - '0' + flag;
		temp = temp < 10 ? (flag = 0, temp) : (flag = 1, temp - 10);
		rStr += (temp + '0');
	}
	if (flag == 1)
		rStr += '1';
	return rStr;
}
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
    size_t nLength1 = str1.size();
    size_t nLength2 = str2.size();
    string output_str;
    if (nLength1 < nLength2)
        output_str = StrAdd(str1, str2);
    else
        output_str = StrAdd(str2, str1);
    reverse(output_str.begin(), output_str.end());
    cout << output_str << endl;
	return 0;
}
