#include<iostream>

using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0) && x != 0)
			return false;
		if (x % 10 == x) //官方没有加这个慢了8ms，以及占用太多内存
			return true;
		int y = 0;
		while (x > y)
		{
			y = y * 10 + x % 10;
			x /= 10;
		}
		return x == y || x == y / 10;
	}
};
