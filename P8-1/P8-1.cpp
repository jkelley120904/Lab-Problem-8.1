#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main(void)
{
	int numVowels = 0;
	string str;
	
	while (true)
	{
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q" || str == "q") break;
		cout << "Vowel count is: " << countVowel(str) << endl;
	}
}

// Calulates the number of vowels in a string
int countVowel(string str)
{
	int numVowels = 0;
	for (int i = 0; i < str.length(); i++)
	{
		char c = str[i];
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		{
			numVowels++;
		}

	}
	return numVowels;
}