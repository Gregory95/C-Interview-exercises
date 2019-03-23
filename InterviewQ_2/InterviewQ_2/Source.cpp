#include <iostream>
#include <string>

using namespace std;

bool isUnique(string str, bool isIt);

int main()
{
	string input;
	bool isItUnique = false;

	cout << "Hello, give as a random string: ";
	cin >> input;
	cout << endl;

	cout << "Is this string has unique characters? ";
	if (isUnique(input, isItUnique) == true)
		cout << "Yes it has!";
	else
		cout << "No it hasn`t";
	cout << endl;

	system("pause");
	return 0;
}

bool isUnique(string str, bool isIt)
{
	int size = str.length();
	char CurrentChar;
	isIt = true;

	for (int i = 0; i < size; i++)
	{
		CurrentChar = str[i];
		if ( i > 0 && CurrentChar == str[i - 1])
		{
			isIt = false;
		}
	}
	return isIt;
}