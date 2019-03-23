#include <iostream>
#include <string>

using namespace std;


void URlify(char[] str, int size);

int main()
{
	string input;
	int length;
	int num;

	cout << "Input: ";
	getline(cin, input);
	cout << " , ";
	cin >> num;
	cout << endl;
	length = input.length();
	cout << "Output: ";
	URlify(input, length);
	cout << input;
	cout << endl;



	system("pause");
	return 0;
}

void URlify(char[] str , int size)
{
	int spaceCount = 0, index, i = 0;
	for (i = 0; i < size; i++)
	{
		if (str[i] == ' ')
			spaceCount++;
	}
	index = size + spaceCount * 2;
	if (size < str)
		str[size] = '\0';

	for (i = size - 1; i >= 0; i--)
	{
		if (str[i] == ' ')
		{ 
			str[index - 1] = '0';
			str[index - 2] = '2';
			str[index - 3] = '%';
			index = index - 3;
	    }
		else
		{
			str[index - 1] = str[i];
				index--;
		}
	}
}