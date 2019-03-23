#include <iostream>
#include <string>

using namespace std;

bool twoStrings(string str1, string str2, bool isIt);

int main()
{

	string firstWord;
	string secondWord;
	bool isPermutation = false;

	cout << "Hello, please enter a string: ";
	cin >> firstWord;
	cout << endl;
	cout << "Enter one more: ";
	cin >> secondWord;
	cout << endl;
	cout << "Are those two strings permutation to each other? ";
	if (twoStrings(firstWord, secondWord, isPermutation) == true)
	{
		cout << "Yes they are!" << endl;
	}
	else
	{
		cout << "No, they are not!" << endl;
	}

	cout << endl;




	system("pause");
	return 0;
}

bool twoStrings(string str1, string str2, bool isIt)
{
	int size_1 = str1.length();
	int size_2 = str2.length();
	//first of all check the length of both strings
	if (size_1 != size_2)
		return false; 

    //step2: check letter by letter
	for (int i = 1; i <= size_1; i++)
	{
		char CurrentChar_ofStr1 = str1[i - 1];
		char CurrentChar_ofStr2 = str2[size_1 - i];
		if (CurrentChar_ofStr1 == CurrentChar_ofStr2) 
		{
			if (i == size_1)
				return true;
		}
	}
	return false;
}