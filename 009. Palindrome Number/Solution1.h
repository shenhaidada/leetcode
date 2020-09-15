#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		string str_x = to_string(x);
		string half_x = "";
		if (str_x.length() % 2)
			half_x = str_x.substr(str_x.length() / 2 + 1, str_x.length() / 2);
		else
			half_x = str_x.substr(str_x.length() / 2, str_x.length() / 2);
		reverse(half_x.begin(), half_x.end());
		if (half_x == str_x.substr(0, str_x.length() / 2))
			return true;
		else
			return false;
	}
};
