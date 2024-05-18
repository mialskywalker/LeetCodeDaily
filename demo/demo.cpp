#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x = 121;
	
	string text = to_string(x);
	string reversedText;

	for (int i = text.length()-1; i >= 0; i--)
	{
		reversedText += text[i];
	}
	if (text == reversedText) {
		cout << "true";
	}
	else {
		cout << "false";
	}
}