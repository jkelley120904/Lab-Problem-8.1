#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main(void)
{
	string str;
	while (true)
	{
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q" || str == "q") break;
		cout << str.length() << endl;
	}
}

int countCharacter(string str)
{
	return str.length();
}