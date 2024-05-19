#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string s = "MCMXCIV";
	int sumOfNums = 0;

	for (int i = 0; i < s.length(); i++)
	{
		char current = s[i];

		switch (current)
		{
		case 'I':
			if (i + 1 < s.length()) {
				if (s[i + 1] == 'V' || s[i + 1] == 'X') {
					sumOfNums -= 1;
				}
				else {
					sumOfNums += 1;
				}
			}
			else {
				sumOfNums += 1;
			}
			break;
		case 'V':
			sumOfNums += 5;
			break;
		case 'X':
			if (i + 1 < s.length()) {
				if (s[i + 1] == 'L' || s[i + 1] == 'C') {
					sumOfNums -= 10;
				}
				else {
					sumOfNums += 10;
				}
			}
			else {
				sumOfNums += 10;
			}
			break;
		case 'L':
			sumOfNums += 50;
			break;
		case 'C':
			if (i + 1 < s.length()) {
				if (s[i + 1] == 'D' || s[i + 1] == 'M') {
					sumOfNums -= 100;
				}
				else {
					sumOfNums += 100;
				}
			}
			else {
				sumOfNums += 100;
			}
			break;
		case 'D':
			sumOfNums += 500;
			break;
		case 'M':
			sumOfNums += 1000;
			break;
		default:
			break;
		}
	}

	return sumOfNums;
}